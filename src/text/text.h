// Copyright (C) 2023 by Vikram Kangotra
// This file is part of Epicycloid.

#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <string>
#include "../renderer/renderer.h"

class Text {
    public:
        Text(const Renderer& renderer, const std::string& font_filename, const int size);
        ~Text();

        void show(const std::string& text, const SDL_Rect& dst, const Color& color);
        void show(const SDL_Rect& dst);
        
    private:
        void setText(const std::string& text, const Color& color);

    private:
        SDL_Texture* texture;
        TTF_Font* font;
        const Renderer& renderer;
};
