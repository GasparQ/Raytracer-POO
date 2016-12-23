//
// Created by gaspar on 07/08/2016.
//

#ifndef RAYTRACER_IEFFECT_HPP
#define RAYTRACER_IEFFECT_HPP

#include "Ray.hpp"

class Scene;
class AObject;

class IEffect
{
public:
    //todo finish
    virtual void ResolveEffectAt(Ray const &incidentRay, AObject *touched, Scene const &scene, Color &toModify) = 0;
    virtual ~IEffect() { }
};

#endif //RAYTRACER_IEFFECT_HPP
