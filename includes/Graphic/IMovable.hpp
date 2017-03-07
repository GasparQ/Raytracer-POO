//
// Created by GasparQ on 07/03/2017.
//

#ifndef RAYTRACER_IMOVABLE_HPP
#define RAYTRACER_IMOVABLE_HPP

#include <Core/Vector2.hpp>

class IMovable
{
public:
    ~IMovable(){}

public:
    virtual const Vector2<int> & getPos() const = 0;

    virtual void setPos(const Vector2<int> &pos) = 0;
};

#endif //RAYTRACER_IMOVABLE_HPP
