//
// Created by gaspar on 14/08/2016.
//

#include <Graphic/IGraphic.hpp>
#include "SDL2/SDLImage.hpp"

SDLImage::SDLImage(Vector2<int> const &size, Vector2<int> const &pos, SDL_Renderer *context) :
    AImage(size, pos)
{
    texture = SDL_CreateTexture(context, SDL_PIXELFORMAT_ABGR8888, SDL_TEXTUREACCESS_STATIC, size.x, size.y);
    if (texture == NULL)
        throw GraphicException(SDL_GetError());
}

SDLImage::~SDLImage()
{
    SDL_DestroyTexture(texture);
}

void *SDLImage::ConvertPixels(void) throw(GraphicException)
{
    if (SDL_UpdateTexture(texture, NULL, pixels, getSize().x * sizeof(*pixels)) != 0)
        throw new GraphicException(SDL_GetError());
    return texture;
}