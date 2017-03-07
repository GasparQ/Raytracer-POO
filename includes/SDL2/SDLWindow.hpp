//
// Created by gaspar on 14/08/2016.
//

#ifndef RAYTRACER_SDLWINDOW_HPP
#define RAYTRACER_SDLWINDOW_HPP

#include <SDL2/SDL.h>
#include "Graphic/AWindow.hpp"

class SDLWindow : public AWindow
{
public:
    SDLWindow(Vector2<int> const &winSize, Vector2<int> const &winPos, const std::string &title);
    virtual ~SDLWindow();

public:
    virtual void DisplayImage(IImage *todisplay) throw(GraphicException);
    virtual IImage *CreateImage(Vector2<int> const &size, Vector2<int> const &pos) throw(GraphicException);

private:
    SDL_Window  *win;
    SDL_Renderer    *renderer;
};

#endif //RAYTRACER_SDLWINDOW_HPP
