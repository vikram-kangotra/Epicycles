// Copyright (C) 2023 by Vikram Kangotra
// This file is part of Epicycloid.

#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_ttf.h>
#include <iostream>
#include <SDL2/SDL.h>
#include <sstream>
#include <vector>
#include <deque>
#include "text/text.h"
#include "window/window.h"
#include "renderer/renderer.h"
#include "event/event.h"

class Epicycloid {
    public:
        Epicycloid(const int radius, const float frequency, const int size)
        : radius{radius}, angle{}, frequency{frequency}, size{size} {}

        void draw(Renderer& renderer) {
            renderer.drawCircle(x, y, size);
        }

        void update() {
            angle += frequency;
        }

        void cycleAround(const int centerX, const int centerY) {
            x = radius * sin(angle) + centerX;
            y = radius * cos(angle) + centerY;
        }

    public:
        int radius;
        float angle;
        float frequency;
        int x;
        int y;
        int size;
};

int main() {

    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();

    constexpr int width = 1280;
    constexpr int height = 720;

    Window window(width, height);
    Renderer renderer(window);
    Text text(renderer, "/usr/share/fonts/TTF/OpenSans-Regular.ttf", 24);

    std::deque<SDL_Point> points;

    int n = 5;

    std::vector<Epicycloid> epicycloids;
    epicycloids.reserve(n);

    for (int i = 0; i < n; ++i) {
        epicycloids.emplace_back(100, 0.1 * (i + 1), 5);
    }

    bool running = true;

    std::vector<Color> colors = {
        Color::BLUE_700,
        Color::AMBER_800,
        Color::LIME_700,
        Color::RED_800,
        Color::VIOLET_500,
        Color::PINK_700,
        Color::YELLOW_600,
        Color::TEAL_500,
        Color::WHITE,
        Color::FUCHSIA_500,
    };

    while (running) {

        switch (Event::pollEvent().type) {
            case SDL_QUIT: {
                running = false;
                break;
            }
            case SDL_KEYDOWN: {
                switch (Event::getEvent().key.keysym.sym) {
                    case SDLK_UP: {
                        epicycloids.emplace_back(100, 0.1*epicycloids.size(), 5);
                        ++n;
                        break;
                    }
                    case SDLK_DOWN: {
                        if (epicycloids.size() > 1) {
                            epicycloids.pop_back();
                            --n;
                        }
                        break;
                    }
                }
            }
        }

        renderer.setDrawColor(Color::BLACK);
        renderer.clear();

        renderer.setDrawColor(colors[(SDL_GetTicks() / 1000) % colors.size()]);

        for (int i = 0; i < n; ++i) {
            int centerX = i != 0 ? epicycloids[i-1].x : width / 2.0;
            int centerY = i != 0 ? epicycloids[i-1].y : height / 2.0;

            epicycloids[i].cycleAround(centerX, centerY);
            epicycloids[i].draw(renderer);
            epicycloids[i].update();
        }

        points.emplace_back(epicycloids[n-1].x, epicycloids[n-1].y);

        for (uint32_t i = 0; i < points.size() - 1; ++i) {
            renderer.drawLine(points[i].x, points[i].y, points[i+1].x, points[i+1].y);
        }

        if (points.size() > 1000) {
            points.pop_front();
        }

        std::ostringstream oss;
        oss << "Epicycles: " << n;

        SDL_Rect dst = {10, 10, 100, 40};
        text.show(oss.str(), dst, Color::PINK_700);

        renderer.present();
    }

    TTF_Quit();
    SDL_Quit();

    return 0;
}
