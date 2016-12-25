//
// Created by gaspar on 16/08/2016.
//

#ifndef RAYTRACER_LIGHTPHONG_HPP
#define RAYTRACER_LIGHTPHONG_HPP

#include "Effect/IEffect.hpp"

class LightPhong : public IEffect
{
public:
    LightPhong(double ambiant, double diffuse, double specular, double specularRadius, double brightness);
    virtual ~LightPhong();

public:
    virtual void ResolveEffectAt(Ray const &incidentRay, AObject *touched, Scene const &scene, Color &toModify);

private:
    double ambiant;
    double diffuse;
    double specular;
    double specularRadius;
    double brightness;
};

#endif //RAYTRACER_LIGHTPHONG_HPP
