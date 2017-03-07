//
// Created by gaspar on 07/08/2016.
//

#ifndef RAYTRACER_SDLGRAPHIC_HPP
#define RAYTRACER_SDLGRAPHIC_HPP

#include <SDL2/SDL.h>
#include "Graphic/IGraphic.hpp"

class SDLGraphic : public IGraphic
{
public:
    SDLGraphic();
    ~SDLGraphic() throw();

public:
    virtual IWindow *CreateWindow(Vector2<int> const &size, Vector2<int> const &pos, std::string const &title) throw(GraphicException);
    virtual void InitDisplay(Vector2<int> const &winsize, Vector2<int> const &winpos, std::string const &wintitle) throw(GraphicException);
    virtual void ShutDownDisplay(void);
};

#endif //RAYTRACER_SDLGRAPHIC_HPP
