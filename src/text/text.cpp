#include "text.h"
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_surface.h>

Text::Text(const Renderer& renderer, const std::string& font_filename, const int size)
: renderer(renderer) {
    font = TTF_OpenFont(font_filename.data(), size);
}

Text::~Text() {
}

void Text::setText(const std::string& text, const Color& color) {
    SDL_Surface* surface = TTF_RenderText_Solid(font, text.data(), color.getColor());
    texture = SDL_CreateTextureFromSurface(renderer.getRendererHandle(), surface);
}

void Text::show(const std::string& text, const SDL_Rect& dst, const Color& color) {
    setText(text, color);
    SDL_RenderCopy(renderer.getRendererHandle(), texture, NULL, &dst);
    SDL_DestroyTexture(texture);
}
