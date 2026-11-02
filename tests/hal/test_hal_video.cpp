#include "video/hal_framebuffer.h"
#include "video/hal_palette.h"
#include "video/hal_scaler.h"

#include <assert.h>
#include <cstddef>
#include <cstdint>
#include <stdio.h>
#include <string.h>

static void test_framebuffer_basic(void)
{
    hal_framebuffer_t fb { };
    hal_framebuffer_init(&fb);

    assert(fb.width == HAL_SCREEN_WIDTH);
    assert(fb.height == HAL_SCREEN_HEIGHT);
    assert(fb.clip.left == 0);
    assert(fb.clip.top == 0);
    assert(fb.clip.right == HAL_SCREEN_WIDTH - 1);
    assert(fb.clip.bottom == HAL_SCREEN_HEIGHT - 1);

    // Test clear
    hal_framebuffer_clear(&fb, 0x0E);
    for (size_t i = 0; i < sizeof(fb.pixels); ++i) {
        assert(fb.pixels[i] == 0x0E);
    }

    printf("  [PASS] test_framebuffer_basic\n");
}

static void test_framebuffer_clipping_and_fill(void)
{
    hal_framebuffer_t fb { };
    hal_framebuffer_init(&fb);
    hal_framebuffer_clear(&fb, 0x00);

    // Set clipping rectangle to [10, 10, 30, 30]
    hal_framebuffer_set_clip(&fb, 10, 10, 30, 30);
    assert(fb.clip.left == 10);
    assert(fb.clip.top == 10);
    assert(fb.clip.right == 30);
    assert(fb.clip.bottom == 30);

    // Attempt to fill rectangle [0, 0, 50, 50] with color 0x0A
    hal_framebuffer_fill_rect(&fb, 0, 0, 50, 50, 0x0A);

    // Inside clipping region must be 0x0A
    assert(fb.pixels[10 * HAL_SCREEN_WIDTH + 10] == 0x0A);
    assert(fb.pixels[30 * HAL_SCREEN_WIDTH + 30] == 0x0A);

    // Outside clipping region must remain 0x00
    assert(fb.pixels[9 * HAL_SCREEN_WIDTH + 10] == 0x00);
    assert(fb.pixels[10 * HAL_SCREEN_WIDTH + 9] == 0x00);
    assert(fb.pixels[31 * HAL_SCREEN_WIDTH + 30] == 0x00);
    assert(fb.pixels[30 * HAL_SCREEN_WIDTH + 31] == 0x00);

    printf("  [PASS] test_framebuffer_clipping_and_fill\n");
}

static void test_framebuffer_copy_rect(void)
{
    hal_framebuffer_t fb { };
    hal_framebuffer_init(&fb);
    hal_framebuffer_clear(&fb, 0x00);

    // Fill a 10x10 block at (20, 20) with 0x0C
    hal_framebuffer_fill_rect(&fb, 20, 20, 10, 10, 0x0C);
    assert(fb.pixels[20 * HAL_SCREEN_WIDTH + 20] == 0x0C);

    // Copy to (100, 100)
    hal_framebuffer_copy_rect(&fb, 20, 20, 100, 100, 10, 10);
    assert(fb.pixels[100 * HAL_SCREEN_WIDTH + 100] == 0x0C);
    assert(fb.pixels[109 * HAL_SCREEN_WIDTH + 109] == 0x0C);
    assert(fb.pixels[110 * HAL_SCREEN_WIDTH + 110] == 0x00);

    printf("  [PASS] test_framebuffer_copy_rect\n");
}

static void test_masked_sprite(void)
{
    hal_framebuffer_t fb { };
    hal_framebuffer_init(&fb);
    hal_framebuffer_clear(&fb, 0x01); // Background = 1

    uint8_t sprite[4] = { 0x00, 0x0F, // (0 = transparent, 0x0F = white)
        0x0F, 0x00 };

    hal_framebuffer_draw_masked_sprite(&fb, 50, 50, sprite, NULL, 2, 2);

    // Pixel (50, 50) is 0 -> transparent, remains background 0x01
    assert(fb.pixels[50 * HAL_SCREEN_WIDTH + 50] == 0x01);
    // Pixel (51, 50) is 0x0F
    assert(fb.pixels[50 * HAL_SCREEN_WIDTH + 51] == 0x0F);
    // Pixel (50, 51) is 0x0F
    assert(fb.pixels[51 * HAL_SCREEN_WIDTH + 50] == 0x0F);
    // Pixel (51, 51) is 0 -> transparent, remains 0x01
    assert(fb.pixels[51 * HAL_SCREEN_WIDTH + 51] == 0x01);

    printf("  [PASS] test_masked_sprite\n");
}

static void test_palette_dac_and_fade(void)
{
    hal_palette_t pal { };
    hal_palette_init_default(&pal);

    // Test 6-bit DAC to 8-bit DAC calculation
    assert(hal_dac_6to8(0) == 0);
    assert(hal_dac_6to8(63) == 255);
    assert(hal_dac_6to8(31) == 125);

    // Program a test DAC color at index 10: R=63, G=0, B=63
    uint8_t rgb[3] = { 63, 0, 63 };
    hal_palette_set_dac(&pal, rgb, 10, 1);

    assert(pal.dac[10].r == 63);
    assert(pal.dac[10].g == 0);
    assert(pal.dac[10].b == 63);

    // RGBA: R=255, G=0, B=255, A=255
    uint32_t expected_rgba = 0xFF000000U | (255U << 16) | (0U << 8) | 255U;
    assert(pal.rgba[10] == expected_rgba);
    (void)expected_rgba;

    // Test fade to black (factor 0)
    hal_palette_t faded { };
    hal_palette_fade(&faded, &pal, 0);
    assert(faded.dac[10].r == 0);
    assert(faded.dac[10].g == 0);
    assert(faded.dac[10].b == 0);

    // Test fade at 50% (factor 128)
    hal_palette_fade(&faded, &pal, 128);
    assert(faded.dac[10].r == (63 * 128) / 256);

    printf("  [PASS] test_palette_dac_and_fade\n");
}

static void test_scaler_viewport(void)
{
    // 1920x1080 (16:9 widescreen) should result in pillarboxing (4:3 centered)
    hal_viewport_t vp = hal_scaler_calculate_viewport(1920, 1080);
    // Height = 1080, Width = 1080 * 4 / 3 = 1440
    assert(vp.height == 1080);
    assert(vp.width == 1440);
    assert(vp.x == (1920 - 1440) / 2); // 240
    assert(vp.y == 0);

    // 800x800 (1:1 square) should result in letterboxing (height = 800 * 3 / 4 = 600)
    vp = hal_scaler_calculate_viewport(800, 800);
    assert(vp.width == 800);
    assert(vp.height == 600);
    assert(vp.x == 0);
    assert(vp.y == (800 - 600) / 2); // 100

    printf("  [PASS] test_scaler_viewport\n");
}

int main(void)
{
    printf("[BEGIN] test_hal_video\n");
    test_framebuffer_basic();
    test_framebuffer_clipping_and_fill();
    test_framebuffer_copy_rect();
    test_masked_sprite();
    test_palette_dac_and_fade();
    test_scaler_viewport();
    printf("[SUCCESS] test_hal_video completed cleanly.\n");
    return 0;
}
