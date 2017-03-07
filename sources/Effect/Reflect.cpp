//
// Created by GasparQ on 04/03/2017.
//

#include "Effect/Reflect.hpp"
#include <Core/CalculUnit.hpp>
#include "Core/Scene.hpp"

int Reflect::current_recursion = 0;
int Reflect::max_recursion = 10;

Reflect::Reflect(double value) :
    coeff(value)
{

}

Reflect::~Reflect()
{

}

void Reflect::ResolveEffectAt(RaycastHit const &hit, Scene const &scene, Color &toModify)
{
    if (Reflect::current_recursion >= Reflect::max_recursion)
        return;

    ++Reflect::current_recursion;
    Ray reflect = CalculUnit::unit.GetReflectedRay(hit.getIncident_ray(), hit.getNormal(), true, hit.getIsec_point());

    RaycastHit refHit = scene.RayCast(reflect);

    if (refHit.getTouched() != NULL)
    {
        Color enligthed = refHit.getTouched()->getEnligthedColor(refHit, scene);
        toModify = enligthed * coeff + toModify * (1 - coeff);
    }
    else
        toModify = toModify * (1 - coeff);
    --Reflect::current_recursion;
}

void Reflect::setRecursionLimit(int limit)
{
    Reflect::max_recursion = limit;
}
