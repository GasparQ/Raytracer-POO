//
// Created by GasparQ on 12/03/2017.
//

#ifndef RAYTRACER_SDLLOADABLEIMAGE_HPP
#define RAYTRACER_SDLLOADABLEIMAGE_HPP


#include <Graphic/AImage.hpp>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_render.h>

class SDLLoadableImage : public AImage
{
public:
    explicit SDLLoadableImage(std::string const &texturename, SDL_Renderer *context);
    virtual ~SDLLoadableImage();

public:
    virtual void *ConvertPixels(void) throw(GraphicException);

private:
    SDL_Surface *surface;
    SDL_Texture *texture;
};


#endif //RAYTRACER_SDLLOADABLEIMAGE_HPP
