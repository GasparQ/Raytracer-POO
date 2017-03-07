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
private:
    static int current_recursion;
    static int max_recursion;

public:
    Reflect(double value = 0);
    virtual ~Reflect();

public:
    virtual void ResolveEffectAt(RaycastHit const &hit, Scene const &scene, Color &toModify);

public:
    static void setRecursionLimit(const int limit);

private:
    double coeff;
};


#endif //RAYTRACER_REFLECT_HPP
