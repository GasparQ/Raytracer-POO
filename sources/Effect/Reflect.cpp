//
// Created by GasparQ on 04/03/2017.
//

#include <Core/CalculUnit.hpp>
#include "Object/AObject.hpp"
#include "Effect/Reflect.hpp"

Reflect::Reflect(double value) :
    coeff(value)
{

}

Reflect::~Reflect()
{

}

void Reflect::ResolveEffectAt(RaycastHit const &hit, Scene const &scene, Color &toModify)
{
    Ray reflect = CalculUnit::unit.GetReflectedRay(hit.getIncident_ray(), hit.getNormal());
    RaycastHit refHit = scene.RayCast(reflect);

    if (refHit.getTouched() != NULL)
    {
        Color enligthed = refHit.getTouched()->getEnligthedColor(refHit, scene);
        toModify = enligthed * coeff + toModify * (1 - coeff);
    }
    else
        toModify = toModify * (1 - coeff);
}
