//
// Created by GasparQ on 07/03/2017.
//

#include <Core/CalculUnit.hpp>
#include "Effect/Refraction.hpp"
#include "Core/RaycastHit.hpp"
#include "Core/Scene.hpp"

double Refraction::base_coeff = 1;
double Refraction::current_coeff = base_coeff;

int Refraction::curr_recursion = 0;
int Refraction::max_recursion = 10;

Refraction::Refraction(double opacity, double refrac_coeef) :
    opacity(opacity),
    refrac_coeff(refrac_coeef == 0 ? Refraction::base_coeff : refrac_coeef)
{

}

Refraction::~Refraction()
{

}

extern bool print_debug;

void Refraction::ResolveEffectAt(RaycastHit const &hit, Scene const &scene, Color &toModify)
{
    //Max recursion protection
    if (Refraction::curr_recursion >= Refraction::max_recursion)
        return;
    ++Refraction::curr_recursion;

    //Get the refraction coefficient of the current object and save one of the last
    double save_coeff = Refraction::current_coeff;
    Refraction::current_coeff = refrac_coeff;

    if (save_coeff == Refraction::current_coeff)
        Refraction::current_coeff = Refraction::base_coeff;

    //Raycast refracted ray calculated from chosen coefficients
    Ray refrac = CalculUnit::unit.GetRefractedRay(save_coeff, Refraction::current_coeff, hit.getIncident_ray(), hit.getNormal(), hit.getIsec_point());

    RaycastHit refracHit = scene.RayCast(refrac);

    //Calculate resulting color
    toModify *= (1.0 - opacity);

    if (refracHit.getTouched() != nullptr)
    {
        toModify += (refracHit.getTouched()->getEnligthedColor(refracHit, scene) * opacity);
    }

    //Max recursion protection ending
    Refraction::current_coeff = save_coeff;
    --Refraction::curr_recursion;
}

void Refraction::setBaseRefractionCoeff(double coeff)
{
    if (coeff == 0)
        return;
    Refraction::base_coeff = coeff;
    Refraction::current_coeff = Refraction::base_coeff;
}

void Refraction::setRecursionLimit(int max)
{
    Refraction::max_recursion = max;
}

double Refraction::getRefracCoeff() const
{
    return refrac_coeff;
}
