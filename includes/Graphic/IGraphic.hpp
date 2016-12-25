//
// Created by gaspar on 07/08/2016.
//

#ifndef RAYTRACER_IGRAPHIC_HPP
#define RAYTRACER_IGRAPHIC_HPP

#include "Graphic/AWindow.hpp"
#include "GraphicException.hpp"

//todo implement a method that allows to change parameters
class IGraphic
{
public:
    virtual ~IGraphic() throw() { }
    virtual AWindow *CreateWindow(Vector2<int> const &size, Vector2<int> const &pos, std::string const &title) throw(GraphicException) = 0;
    virtual void InitDisplay(Vector2<int> const &winsize = {600, 600}, Vector2<int> const &winpos = {0, 0}, const std::string &wintitle = "Raytracer") throw(GraphicException) = 0;
    virtual void ShutDownDisplay(void) = 0;
};

#endif //RAYTRACER_IGRAPHIC_HPP
