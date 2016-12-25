//
// Created by gaspar on 14/08/2016.
//

#ifndef RAYTRACER_SDLIMAGE_HPP
#define RAYTRACER_SDLIMAGE_HPP

#include <SDL/SDL.h>
#include "Graphic/AImage.hpp"

class SDLImage : public AImage
{
public:
    SDLImage(Vector2<int> const &size, Vector2<int> const &pos, SDL_Renderer *context);
    virtual ~SDLImage();

public:
    virtual void *ConvertPixels(void) throw(GraphicException);

private:
    SDL_Texture *texture;
};

#endif //RAYTRACER_SDLIMAGE_HPP
