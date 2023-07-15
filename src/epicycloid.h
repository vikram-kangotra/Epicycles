#pragma once

#include "renderer/renderer.h"

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
