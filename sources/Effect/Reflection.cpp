//
// Created by GasparQ on 04/03/2017.
//

#include "Effect/Reflection.hpp"
#include <Core/CalculUnit.hpp>
#include "Core/Scene.hpp"

int Reflection::current_recursion = 0;
int Reflection::max_recursion = 10;

Reflection::Reflection(double value) :
    coeff(value)
{

}

Reflection::~Reflection()
{

}

void Reflection::ResolveEffectAt(RaycastHit const &hit, Scene const &scene, Color &toModify)
{
    if (Reflection::current_recursion >= Reflection::max_recursion)
        return;

    ++Reflection::current_recursion;
    Ray reflect = CalculUnit::unit.GetReflectedRay(hit.getIncident_ray(), hit.getNormal(), true, hit.getIsec_point());

    RaycastHit refHit = scene.RayCast(reflect);

    if (refHit.getTouched() != NULL)
    {
        Color enligthed = refHit.getTouched()->getEnligthedColor(refHit, scene);
        toModify = enligthed * coeff + toModify * (1 - coeff);
    }
    else
        toModify = toModify * (1 - coeff);
    --Reflection::current_recursion;
}

void Reflection::setRecursionLimit(int limit)
{
    Reflection::max_recursion = limit;
}
