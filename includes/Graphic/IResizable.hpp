//
// Created by GasparQ on 07/03/2017.
//

#ifndef RAYTRACER_IRESIZABLE_HPP
#define RAYTRACER_IRESIZABLE_HPP

#include <Core/Vector2.hpp>

class IResizable
{
public:
    virtual ~IResizable(){}

public:
    virtual const Vector2<int> & getSize() const = 0;

    virtual void setSize(const Vector2<int> &size) = 0;
};

#endif //RAYTRACER_IRESIZABLE_HPP
