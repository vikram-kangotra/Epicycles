// Copyright (C) 2023 by Vikram Kangotra
// This file is part of Circuit-Simulator.#pragma once

#include <cstdint>
#include <SDL2/SDL.h>

class Color {
    public:
        Color(const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a) : r(r), g(g), b(b), a(a) {}

        SDL_Color getColor() const {
            return SDL_Color {r, g, b, a};
        }

        uint8_t r;
        uint8_t g;
        uint8_t b;
        uint8_t a;

        static const Color WHITE;
        static const Color BLACK;
        static const Color SLATE_50;
        static const Color SLATE_100;
        static const Color SLATE_200;
        static const Color SLATE_300;
        static const Color SLATE_400;
        static const Color SLATE_500;
        static const Color SLATE_600;
        static const Color SLATE_700;
        static const Color SLATE_800;
        static const Color SLATE_900;
        static const Color SLATE_950;
        static const Color GRAY_50;
        static const Color GRAY_100;
        static const Color GRAY_200;
        static const Color GRAY_300;
        static const Color GRAY_400;
        static const Color GRAY_500;
        static const Color GRAY_600;
        static const Color GRAY_700;
        static const Color GRAY_800;
        static const Color GRAY_900;
        static const Color GRAY_950;
        static const Color ZINC_50;
        static const Color ZINC_100;
        static const Color ZINC_200;
        static const Color ZINC_300;
        static const Color ZINC_400;
        static const Color ZINC_500;
        static const Color ZINC_600;
        static const Color ZINC_700;
        static const Color ZINC_800;
        static const Color ZINC_900;
        static const Color ZINC_950;
        static const Color NEUTRAL_50;
        static const Color NEUTRAL_100;
        static const Color NEUTRAL_200;
        static const Color NEUTRAL_300;
        static const Color NEUTRAL_400;
        static const Color NEUTRAL_500;
        static const Color NEUTRAL_600;
        static const Color NEUTRAL_700;
        static const Color NEUTRAL_800;
        static const Color NEUTRAL_900;
        static const Color NEUTRAL_950;
        static const Color STONE_50;
        static const Color STONE_100;
        static const Color STONE_200;
        static const Color STONE_300;
        static const Color STONE_400;
        static const Color STONE_500;
        static const Color STONE_600;
        static const Color STONE_700;
        static const Color STONE_800;
        static const Color STONE_900;
        static const Color STONE_950;
        static const Color RED_50;
        static const Color RED_100;
        static const Color RED_200;
        static const Color RED_300;
        static const Color RED_400;
        static const Color RED_500;
        static const Color RED_600;
        static const Color RED_700;
        static const Color RED_800;
        static const Color RED_900;
        static const Color RED_950;
        static const Color ORANGE_50;
        static const Color ORANGE_100;
        static const Color ORANGE_200;
        static const Color ORANGE_300;
        static const Color ORANGE_400;
        static const Color ORANGE_500;
        static const Color ORANGE_600;
        static const Color ORANGE_700;
        static const Color ORANGE_800;
        static const Color ORANGE_900;
        static const Color ORANGE_950;
        static const Color AMBER_50;
        static const Color AMBER_100;
        static const Color AMBER_200;
        static const Color AMBER_300;
        static const Color AMBER_400;
        static const Color AMBER_500;
        static const Color AMBER_600;
        static const Color AMBER_700;
        static const Color AMBER_800;
        static const Color AMBER_900;
        static const Color AMBER_950;
        static const Color YELLOW_50;
        static const Color YELLOW_100;
        static const Color YELLOW_200;
        static const Color YELLOW_300;
        static const Color YELLOW_400;
        static const Color YELLOW_500;
        static const Color YELLOW_600;
        static const Color YELLOW_700;
        static const Color YELLOW_800;
        static const Color YELLOW_900;
        static const Color YELLOW_950;
        static const Color LIME_50;
        static const Color LIME_100;
        static const Color LIME_200;
        static const Color LIME_300;
        static const Color LIME_400;
        static const Color LIME_500;
        static const Color LIME_600;
        static const Color LIME_700;
        static const Color LIME_800;
        static const Color LIME_900;
        static const Color LIME_950;
        static const Color GREEN_50;
        static const Color GREEN_100;
        static const Color GREEN_200;
        static const Color GREEN_300;
        static const Color GREEN_400;
        static const Color GREEN_500;
        static const Color GREEN_600;
        static const Color GREEN_700;
        static const Color GREEN_800;
        static const Color GREEN_900;
        static const Color GREEN_950;
        static const Color EMERALD_50;
        static const Color EMERALD_100;
        static const Color EMERALD_200;
        static const Color EMERALD_300;
        static const Color EMERALD_400;
        static const Color EMERALD_500;
        static const Color EMERALD_600;
        static const Color EMERALD_700;
        static const Color EMERALD_800;
        static const Color EMERALD_900;
        static const Color EMERALD_950;
        static const Color TEAL_50;
        static const Color TEAL_100;
        static const Color TEAL_200;
        static const Color TEAL_300;
        static const Color TEAL_400;
        static const Color TEAL_500;
        static const Color TEAL_600;
        static const Color TEAL_700;
        static const Color TEAL_800;
        static const Color TEAL_900;
        static const Color TEAL_950;
        static const Color CYAN_50;
        static const Color CYAN_100;
        static const Color CYAN_200;
        static const Color CYAN_300;
        static const Color CYAN_400;
        static const Color CYAN_500;
        static const Color CYAN_600;
        static const Color CYAN_700;
        static const Color CYAN_800;
        static const Color CYAN_900;
        static const Color CYAN_950;
        static const Color SKY_50;
        static const Color SKY_100;
        static const Color SKY_200;
        static const Color SKY_300;
        static const Color SKY_400;
        static const Color SKY_500;
        static const Color SKY_600;
        static const Color SKY_700;
        static const Color SKY_800;
        static const Color SKY_900;
        static const Color SKY_950;
        static const Color BLUE_50;
        static const Color BLUE_100;
        static const Color BLUE_200;
        static const Color BLUE_300;
        static const Color BLUE_400;
        static const Color BLUE_500;
        static const Color BLUE_600;
        static const Color BLUE_700;
        static const Color BLUE_800;
        static const Color BLUE_900;
        static const Color BLUE_950;
        static const Color INDIGO_50;
        static const Color INDIGO_100;
        static const Color INDIGO_200;
        static const Color INDIGO_300;
        static const Color INDIGO_400;
        static const Color INDIGO_500;
        static const Color INDIGO_600;
        static const Color INDIGO_700;
        static const Color INDIGO_800;
        static const Color INDIGO_900;
        static const Color INDIGO_950;
        static const Color VIOLET_50;
        static const Color VIOLET_100;
        static const Color VIOLET_200;
        static const Color VIOLET_300;
        static const Color VIOLET_400;
        static const Color VIOLET_500;
        static const Color VIOLET_600;
        static const Color VIOLET_700;
        static const Color VIOLET_800;
        static const Color VIOLET_900;
        static const Color VIOLET_950;
        static const Color PURPLE_50;
        static const Color PURPLE_100;
        static const Color PURPLE_200;
        static const Color PURPLE_300;
        static const Color PURPLE_400;
        static const Color PURPLE_500;
        static const Color PURPLE_600;
        static const Color PURPLE_700;
        static const Color PURPLE_800;
        static const Color PURPLE_900;
        static const Color PURPLE_950;
        static const Color FUCHSIA_50;
        static const Color FUCHSIA_100;
        static const Color FUCHSIA_200;
        static const Color FUCHSIA_300;
        static const Color FUCHSIA_400;
        static const Color FUCHSIA_500;
        static const Color FUCHSIA_600;
        static const Color FUCHSIA_700;
        static const Color FUCHSIA_800;
        static const Color FUCHSIA_900;
        static const Color FUCHSIA_950;
        static const Color PINK_50;
        static const Color PINK_100;
        static const Color PINK_200;
        static const Color PINK_300;
        static const Color PINK_400;
        static const Color PINK_500;
        static const Color PINK_600;
        static const Color PINK_700;
        static const Color PINK_800;
        static const Color PINK_900;
        static const Color PINK_950;
        static const Color ROSE_50;
        static const Color ROSE_100;
        static const Color ROSE_200;
        static const Color ROSE_300;
        static const Color ROSE_400;
        static const Color ROSE_500;
        static const Color ROSE_600;
        static const Color ROSE_700;
        static const Color ROSE_800;
        static const Color ROSE_900;
        static const Color ROSE_950;

};
