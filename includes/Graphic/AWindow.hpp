//
// Created by gaspar on 14/08/2016.
//

#ifndef RAYTRACER_AWINDOW_HPP
#define RAYTRACER_AWINDOW_HPP

#include <string>
#include "Core/Vector2.hpp"
#include "Graphic/AImage.hpp"

class AWindow
{
public:
    AWindow(Vector2<int> const &winSize, Vector2<int> const &winPos, const std::string &winTitle);
    virtual ~AWindow();

public:
    virtual AImage *CreateImage(Vector2<int> const &size, Vector2<int> const &pos) throw(GraphicException) = 0;
    virtual void DisplayImage(AImage *toDisplay) throw(GraphicException) = 0;

    const Vector2<int> & getSize() const;

    void setSize(const Vector2<int> &size);

    const Vector2<int> & getPos() const;

    void setPos(const Vector2<int> &pos);

    const std::string & getTitle() const;

    void setTitle(const std::string &title);

private:
    Vector2<int>    size;
    Vector2<int>    pos;
    std::string     title;
};

#endif //RAYTRACER_AWINDOW_HPP
