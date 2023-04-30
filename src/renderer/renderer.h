// Copyright (C) 2023 by Vikram Kangotra
// This file is part of Circuit-Simulator.

#pragma once

#include <SDL2/SDL.h>
#include "color.h"
#include "../window/window.h"

class Renderer {
    public:
        Renderer(const Window& window);
        ~Renderer();
        
        SDL_Renderer* getRendererHandle() const { return renderer; }

        void clear();
        void present();
        void setDrawColor(const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a);
        void setDrawColor(const Color& color);

        void drawPoint(const int x, const int y);
        void drawRect(const SDL_Rect& rect);
        void drawLine(const int x1, const int y1, const int x2, const int y2);
        void drawCircle(const int x, const int y, const int radius);

    private:
        SDL_Renderer* renderer;
};
