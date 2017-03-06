//
// Created by gaspar on 07/08/2016.
//

#ifndef RAYTRACER_IEFFECT_HPP
#define RAYTRACER_IEFFECT_HPP

#include "Core/Ray.hpp"

class Scene;
class AObject;
class RaycastHit;

class IEffect
{
public:
    //todo finish
    virtual void ResolveEffectAt(RaycastHit const &incidentRay, Scene const &scene, Color &toModify) = 0;
    virtual ~IEffect() { }
};

#endif //RAYTRACER_IEFFECT_HPP
