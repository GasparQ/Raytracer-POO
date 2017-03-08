//
// Created by gaspar on 07/08/2016.
//

#ifndef RAYTRACER_IEFFECT_HPP
#define RAYTRACER_IEFFECT_HPP

#include "Core/Ray.hpp"
#include <Core/Color.hpp>

class Scene;
class RaycastHit;

class IEffect
{
public:
    virtual ~IEffect() { }

public:
    //todo finish
    virtual void ResolveEffectAt(RaycastHit const &hit, Scene const &scene, Color &toModify) = 0;
};

#endif //RAYTRACER_IEFFECT_HPP
