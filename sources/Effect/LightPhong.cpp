//
// Created by gaspar on 16/08/2016.
//

#include <vector>
#include <cmath>
#include <iostream>
#include "Core/CalculUnit.hpp"
#include "Core/Spot.hpp"
#include "Effect/LightPhong.hpp"
#include "Core/Scene.hpp"
#include "Object/AObject.hpp"

LightPhong::LightPhong(double ambiant, double diffuse, double specular, double specularRadius, double brightness) :
    ambiant{ambiant},
    diffuse{diffuse},
    specular{specular},
    specularRadius{specularRadius},
    brightness{brightness}
{

}

LightPhong::~LightPhong()
{

}

void LightPhong::ResolveEffectAt(Ray const &incidentRay, AObject *touched, Scene const &scene, Color &toModify)
{
    double intensity = 0, diffuseFactor = 0, specularFactor = 0;
    std::vector<Spot *> applyiedSpots;
    Vector3<double> normal = touched->getNormalAt(incidentRay.getFocusedPoint());
    Vector3<double> unitedNormal = CalculUnit::unit.GetUnitVector(normal);

    for (Spot *currSpot : scene.getSpots())
    {
        Ray lightRay(incidentRay.getFocusedPoint(), currSpot->getPosition() - incidentRay.getFocusedPoint());

        if (scene.RayCast(lightRay) == NULL || lightRay.getNorm() < CalculUnit::floatZero || lightRay.getNorm() > 1.0)
        {
            applyiedSpots.push_back(currSpot);
            intensity = currSpot->getIntensity();
            diffuseFactor += intensity * CalculUnit::unit.GetVectorCosinus(normal, lightRay.getDirection());
            specularFactor += intensity * pow(
                    CalculUnit::unit.GetVectorCosinus(
                            CalculUnit::unit.GetReflectedRay(lightRay, unitedNormal).getDirection(),
                            incidentRay.getDirection()
                    ),
                    specularRadius
            );
        }
    }
    toModify *= (ambiant + diffuse * diffuseFactor + specular * specularFactor);
}
