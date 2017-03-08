//
// Created by GasparQ on 07/03/2017.
//

#ifndef RAYTRACER_REFRACTION_HPP
#define RAYTRACER_REFRACTION_HPP

#include "IEffect.hpp"

class Refraction : public IEffect
{
private:
    static double current_coeff;
    static double base_coeff;

private:
    static int curr_recursion;
    static int max_recursion;

public:
    explicit Refraction(double opacity, double refrac_coeff = 0);
    virtual ~Refraction();

public:
    virtual void ResolveEffectAt(RaycastHit const &hit, Scene const &scene, Color &toModify);

public:
    static void setBaseRefractionCoeff(double coeff);
    static void setRecursionLimit(int max);

public:
    double getRefracCoeff() const;

private:
    double refrac_coeff;
    double opacity;
};


#endif //RAYTRACER_REFRACTION_HPP
