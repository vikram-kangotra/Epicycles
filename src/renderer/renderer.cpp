// Copyright (C) 2023 by Vikram Kangotra
// This file is part of Epicycloid.

#include "renderer.h"
#include <SDL2/SDL_render.h>

Renderer::Renderer(const Window& window) {
    renderer = SDL_CreateRenderer(window.getWindowHandle(), -1, SDL_RENDERER_ACCELERATED);

    if (renderer == NULL) {
        SDL_Log("Unable to create renderer: %s", SDL_GetError());
        exit(1);
    }
}

Renderer::~Renderer() {

}

void Renderer::clear() {
    SDL_RenderClear(renderer);
}

void Renderer::present() {
    SDL_RenderPresent(renderer);
}

void Renderer::setDrawColor(const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a) {
    SDL_SetRenderDrawColor(renderer, r, g, b, a);
}

void Renderer::setDrawColor(const Color& color) {
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
}

void Renderer::drawPoint(const int x, const int y) {
    SDL_RenderDrawPoint(renderer, x, y);
}

void Renderer::drawRect(const SDL_Rect& rect) {
    SDL_RenderDrawRect(renderer, &rect);
}

void Renderer::drawLine(const int x1, const int y1, const int x2, const int y2) {
    SDL_RenderDrawLine(renderer, x1, y1, x2, y2);
}

void Renderer::drawCircle(const int x, const int y, const int radius) {
    int y1 = y - radius;
    int x2 = x + radius;
    int y2 = y + radius;

    for (int i = x - radius; i <= x2; i++) {
        for (int j = y1; j <= y2; j++) {
            if ((i - x) * (i - x) + (j - y) * (j - y) <= radius * radius) {
                SDL_RenderDrawPoint(renderer, i, j);
            }
        }
    }
}
