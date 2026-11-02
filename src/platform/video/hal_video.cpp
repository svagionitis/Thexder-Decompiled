#include "hal_video.h"
#include "hal_framebuffer.h"
#include "hal_palette.h"
#include "hal_scaler.h"
#include "hal_sdl_raii.hpp"

#include <SDL2/SDL.h>
#include <cstdint>

namespace {

struct VideoState {
    hal::WindowPtr window { nullptr };
    hal::RendererPtr renderer { nullptr };
    hal::TexturePtr texture { nullptr };
    hal_framebuffer_t framebuffer { };
    hal_palette_t palette { };
    hal_scaler_t scaler { };
    bool initialized { false };
};

VideoState g_video;

bool video_driver_init(uint16_t width, uint16_t height, uint8_t bpp)
{
    (void)width;
    (void)height;
    (void)bpp;
    hal_framebuffer_init(&g_video.framebuffer);
    hal_palette_init_default(&g_video.palette);
    hal_scaler_init(&g_video.scaler);
    return true;
}

void video_driver_shutdown(void)
{
    hal_framebuffer_clear(&g_video.framebuffer, 0);
}

void video_driver_set_palette(const uint8_t* dac_triplets, uint16_t start_index, uint16_t count)
{
    hal_palette_set_dac(&g_video.palette, dac_triplets, start_index, count);
}

void video_driver_get_palette(uint8_t* out_dac_triplets, uint16_t start_index, uint16_t count)
{
    hal_palette_get_dac(&g_video.palette, out_dac_triplets, start_index, count);
}

void video_driver_draw_sprite(int16_t x, int16_t y, const uint8_t* sprite_data, int16_t width, int16_t height)
{
    hal_framebuffer_draw_sprite(&g_video.framebuffer, x, y, sprite_data, width, height);
}

void video_driver_draw_masked_sprite(
    int16_t x, int16_t y, const uint8_t* sprite_data, const uint8_t* mask_data, int16_t width, int16_t height)
{
    hal_framebuffer_draw_masked_sprite(&g_video.framebuffer, x, y, sprite_data, mask_data, width, height);
}

void video_driver_fill_rect(int16_t x, int16_t y, int16_t width, int16_t height, uint8_t color_index)
{
    hal_framebuffer_fill_rect(&g_video.framebuffer, x, y, width, height, color_index);
}

void video_driver_copy_rect(int16_t src_x, int16_t src_y, int16_t dst_x, int16_t dst_y, int16_t width, int16_t height)
{
    hal_framebuffer_copy_rect(&g_video.framebuffer, src_x, src_y, dst_x, dst_y, width, height);
}

void video_driver_scroll_screen(int16_t dx, int16_t dy, uint8_t fill_color)
{
    hal_framebuffer_scroll(&g_video.framebuffer, dx, dy, fill_color);
}

void video_driver_vsync_wait(void)
{
    // SDL_RENDERER_PRESENTVSYNC handles vsync pacing in flip_page()
}

void video_driver_flip_page(void)
{
    if (!g_video.initialized || !g_video.renderer || !g_video.texture) {
        return;
    }

    // Convert 8-bit framebuffer to 32-bit RGBA streaming buffer
    hal_scaler_convert_frame(&g_video.scaler, &g_video.framebuffer, &g_video.palette);

    // Upload to streaming texture
    SDL_UpdateTexture(
        g_video.texture.get(), nullptr, g_video.scaler.rgba_buffer, HAL_SCREEN_WIDTH * (int)sizeof(uint32_t));

    // Clear render target to black (for letterbox/pillarbox bars)
    SDL_SetRenderDrawColor(g_video.renderer.get(), 0, 0, 0, 255);
    SDL_RenderClear(g_video.renderer.get());

    // Calculate aspect-preserving 4:3 viewport
    int win_w = 0;
    int win_h = 0;
    SDL_GetWindowSize(g_video.window.get(), &win_w, &win_h);
    hal_viewport_t vp = hal_scaler_calculate_viewport(win_w, win_h);

    SDL_Rect dst_rect;
    dst_rect.x = vp.x;
    dst_rect.y = vp.y;
    dst_rect.w = vp.width;
    dst_rect.h = vp.height;

    SDL_RenderCopy(g_video.renderer.get(), g_video.texture.get(), nullptr, &dst_rect);
    SDL_RenderPresent(g_video.renderer.get());
}

void video_driver_set_clip_rect(int16_t left, int16_t top, int16_t right, int16_t bottom)
{
    hal_framebuffer_set_clip(&g_video.framebuffer, left, top, right, bottom);
}

void video_driver_clear_screen(uint8_t color_index)
{
    hal_framebuffer_clear(&g_video.framebuffer, color_index);
}

uint8_t* video_driver_get_framebuffer(void)
{
    return g_video.framebuffer.pixels;
}

const hal_video_driver_t s_video_driver = { video_driver_init, video_driver_shutdown, video_driver_set_palette,
    video_driver_get_palette, video_driver_draw_sprite, video_driver_draw_masked_sprite, video_driver_fill_rect,
    video_driver_copy_rect, video_driver_scroll_screen, video_driver_vsync_wait, video_driver_flip_page,
    video_driver_set_clip_rect, video_driver_clear_screen, video_driver_get_framebuffer };

} // namespace

bool hal_video_init(const char* title, uint16_t initial_scale)
{
    if (g_video.initialized) {
        return true;
    }

    if (SDL_InitSubSystem(SDL_INIT_VIDEO) != 0) {
        return false;
    }

    if (initial_scale == 0) {
        initial_scale = 3; // Default 3x integer scale -> 960x600 (scaled 4:3 to ~960x720)
    }

    int win_w = (int)HAL_SCREEN_WIDTH * (int)initial_scale;
    // 4:3 display aspect: height = (win_w * 3) / 4
    int win_h = (win_w * 3) / 4;

    SDL_Window* win = SDL_CreateWindow(title ? title : "Firehawk: Thexder II", SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, win_w, win_h, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);

    if (!win) {
        return false;
    }
    g_video.window.reset(win);

    SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    if (!ren) {
        // Fallback to software renderer if accelerated is unavailable
        ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_SOFTWARE);
        if (!ren) {
            return false;
        }
    }
    g_video.renderer.reset(ren);

    SDL_Texture* tex = SDL_CreateTexture(
        ren, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STREAMING, HAL_SCREEN_WIDTH, HAL_SCREEN_HEIGHT);

    if (!tex) {
        return false;
    }
    g_video.texture.reset(tex);

    // Initialize driver internals
    video_driver_init(HAL_SCREEN_WIDTH, HAL_SCREEN_HEIGHT, 8);

    g_video.initialized = true;
    return true;
}

void hal_video_shutdown(void)
{
    if (!g_video.initialized) {
        return;
    }

    g_video.texture.reset();
    g_video.renderer.reset();
    g_video.window.reset();

    SDL_QuitSubSystem(SDL_INIT_VIDEO);
    g_video.initialized = false;
}

const hal_video_driver_t* hal_video_get_driver(void)
{
    return &s_video_driver;
}
