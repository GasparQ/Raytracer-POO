//
// Created by GasparQ on 04/03/2017.
//

#ifndef RAYTRACER_REFLECT_HPP
#define RAYTRACER_REFLECT_HPP


#include <Core/Color.hpp>
#include "IEffect.hpp"
#include "Core/RaycastHit.hpp"

class Reflect : public IEffect
{
public:
    Reflect(double value = 0);
    virtual ~Reflect();

public:
    virtual void ResolveEffectAt(RaycastHit const &hit, Scene const &scene, Color &toModify);

private:
    double coeff;
};


#endif //RAYTRACER_REFLECT_HPP
