//
// Created by GasparQ on 07/03/2017.
//

#ifndef RAYTRACER_ICOLORABLE_HPP
#define RAYTRACER_ICOLORABLE_HPP

#include <Core/Color.hpp>

class IColorable
{
public:
    ~IColorable(){}

public:
    virtual const Color &getColor() const = 0;

    virtual void setColor(const Color &color) = 0;
};

#endif //RAYTRACER_ICOLORABLE_HPP
