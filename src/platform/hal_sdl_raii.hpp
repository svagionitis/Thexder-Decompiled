#pragma once

#include <SDL2/SDL.h>
#include <memory>

namespace hal {

struct SdlWindowDeleter {
    void operator()(SDL_Window* w) const noexcept
    {
        if (w != nullptr) {
            SDL_DestroyWindow(w);
        }
    }
};

struct SdlRendererDeleter {
    void operator()(SDL_Renderer* r) const noexcept
    {
        if (r != nullptr) {
            SDL_DestroyRenderer(r);
        }
    }
};

struct SdlTextureDeleter {
    void operator()(SDL_Texture* t) const noexcept
    {
        if (t != nullptr) {
            SDL_DestroyTexture(t);
        }
    }
};

struct SdlControllerDeleter {
    void operator()(SDL_GameController* c) const noexcept
    {
        if (c != nullptr) {
            SDL_GameControllerClose(c);
        }
    }
};

using WindowPtr = std::unique_ptr<SDL_Window, SdlWindowDeleter>;
using RendererPtr = std::unique_ptr<SDL_Renderer, SdlRendererDeleter>;
using TexturePtr = std::unique_ptr<SDL_Texture, SdlTextureDeleter>;
using ControllerPtr = std::unique_ptr<SDL_GameController, SdlControllerDeleter>;

} // namespace hal
