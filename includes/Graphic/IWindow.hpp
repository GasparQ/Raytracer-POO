//
// Created by GasparQ on 07/03/2017.
//

#ifndef RAYTRACER_IWINDOW_HPP
#define RAYTRACER_IWINDOW_HPP

#include <Core/Vector2.hpp>
#include "GraphicException.hpp"
#include "IImage.hpp"

class IWindow : public IResizable, public IMovable
{
public:
    virtual ~IWindow(){}

public:
    virtual IImage *CreateImage(Vector2<int> const &size, Vector2<int> const &pos) throw(GraphicException) = 0;
    virtual IImage *CreateImageFromFile(std::string const &path) throw(GraphicException) = 0;
    virtual void DisplayImage(IImage *toDisplay) throw(GraphicException) = 0;

public:
    virtual const std::string &getTitle() const = 0;

    virtual void setTitle(const std::string &title) = 0;
};

#endif //RAYTRACER_IWINDOW_HPP
