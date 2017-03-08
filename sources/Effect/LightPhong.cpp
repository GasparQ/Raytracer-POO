//
// Created by gaspar on 16/08/2016.
//

#include <vector>
#include <cmath>
#include <iostream>

#include "Effect/LightPhong.hpp"
#include "Core/Scene.hpp"
#include "Core/CalculUnit.hpp"
#include "Core/Spot.hpp"

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

extern bool print_debug;

void LightPhong::ResolveEffectAt(RaycastHit const &hit, Scene const &scene, Color &toModify)
{
    double intensity = 0, diffuseFactor = 0, specularFactor = 0;
    std::vector<Spot *> applyiedSpots;

    for (Spot *currSpot : scene.getSpots())
    {
        //Vector AB where A is the intersection point and B is the spot position. Vector AB means B - A
        Ray lightRay(hit.getIsec_point(), currSpot->getPosition() - hit.getIsec_point());

//        RaycastHit lightHit = scene.RayCast(lightRay);
//
//        if (print_debug)
//        {
//            std::cout << "LightHit: " << lightHit << std::endl;
//        }

//        if (lightHit.getTouched() == NULL || lightRay.getNorm() < CalculUnit::floatZero || lightRay.getNorm() > 1.0)
//        {
//            applyiedSpots.push_back(currSpot);
            intensity = currSpot->getIntensity();

            double cosd = CalculUnit::unit.GetVectorCosinus(hit.getNormal(), lightRay.getDirection());

            diffuseFactor += intensity * cosd;

            Ray reflect = CalculUnit::unit.GetReflectedRay(lightRay, hit.getNormal());

            double cosi = CalculUnit::unit.GetVectorCosinus(
                    reflect.getDirection(),
                    hit.getIncident_ray().getDirection()
            );

            if (cosi >= CalculUnit::floatZero)
                specularFactor += intensity * pow(cosi, specularRadius);
//        }
    }
    double final_i  = (ambiant + diffuse * diffuseFactor + specular * specularFactor);

    toModify *= final_i;
}
