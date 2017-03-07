//
// Created by gaspar on 14/08/2016.
//

#ifndef RAYTRACER_AWINDOW_HPP
#define RAYTRACER_AWINDOW_HPP

#include <string>
#include "IWindow.hpp"

class AWindow : public IWindow
{
public:
    AWindow(Vector2<int> const &winSize, Vector2<int> const &winPos, const std::string &winTitle);
    virtual ~AWindow();

public:
    virtual const Vector2<int> & getSize() const;

    virtual void setSize(const Vector2<int> &size);

public:
    virtual const Vector2<int> & getPos() const;

    virtual void setPos(const Vector2<int> &pos);

public:
    virtual const std::string & getTitle() const;

    virtual void setTitle(const std::string &title);

private:
    Vector2<int>    size;
    Vector2<int>    pos;
    std::string     title;
};

#endif //RAYTRACER_AWINDOW_HPP
