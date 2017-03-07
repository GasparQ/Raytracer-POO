//
// Created by GasparQ on 07/03/2017.
//

#ifndef RAYTRACER_IPOSITIONNABLE_HPP
#define RAYTRACER_IPOSITIONNABLE_HPP

#include <Core/Vector3.hpp>

class ITransform
{
public:
    virtual ~ITransform(){}

public:
    virtual const Vector3<double> &getPosition() const = 0;

    virtual void setPosition(const Vector3<double> &position) = 0;

    virtual const Vector3<double> &getRotation() const = 0;

    virtual void setRotation(const Vector3<double> &rotation) = 0;
};

#endif //RAYTRACER_IPOSITIONNABLE_HPP
