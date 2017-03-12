//
// Created by GasparQ on 12/03/2017.
//

#include "SDL2/SDLLoadableImage.hpp"

SDLLoadableImage::SDLLoadableImage(std::string const &texturename, SDL_Renderer *context) :
    AImage(Vector2<int>::Zero, Vector2<int>::Zero),
    surface(SDL_LoadBMP(texturename.c_str())),
    texture(SDL_CreateTextureFromSurface(context, surface))
{
    if (surface == nullptr)
        throw std::runtime_error("Error while loading image: " + std::string(SDL_GetError()));
//    if (surface->format->format != SDL_PIXELFORMAT_ABGR8888)
//        throw std::runtime_error("Image(" + texturename + ") format is not ABGR in 32 bit");
    setSize({surface->w, surface->h});
    pixels = (Color *)surface->pixels;
}

SDLLoadableImage::~SDLLoadableImage()
{
    if (surface != nullptr)
        SDL_FreeSurface(surface);
    if (texture)
        SDL_DestroyTexture(texture);
}

void *SDLLoadableImage::ConvertPixels(void) throw(GraphicException)
{
    return texture;
}
