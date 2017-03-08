//
// Created by GasparQ on 04/03/2017.
//

#ifndef RAYTRACER_REFLECT_HPP
#define RAYTRACER_REFLECT_HPP

#include <Core/Color.hpp>
#include "IEffect.hpp"
#include "Core/RaycastHit.hpp"

class Reflection : public IEffect
{
private:
    static int current_recursion;
    static int max_recursion;

public:
    Reflection(double value = 0);
    virtual ~Reflection();

public:
    virtual void ResolveEffectAt(RaycastHit const &hit, Scene const &scene, Color &toModify);

public:
    static void setRecursionLimit(const int limit);

private:
    double coeff;
};


#endif //RAYTRACER_REFLECT_HPP
