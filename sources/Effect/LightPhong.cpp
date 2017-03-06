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

extern bool print_debug;

void LightPhong::ResolveEffectAt(RaycastHit const &hit, Scene const &scene, Color &toModify)
{
    double intensity = 0, diffuseFactor = 0, specularFactor = 0;
    std::vector<Spot *> applyiedSpots;

    if (print_debug)
    {
        std::cout << "Hit: " << hit << std::endl;
    }
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

            if (print_debug)
                std::cout << "Cosd: " << cosd << std::endl;

            diffuseFactor += intensity * cosd;

            Ray reflect = CalculUnit::unit.GetReflectedRay(lightRay, hit.getNormal());

            if (print_debug)
                std::cout << "Reflect: " << reflect << std::endl;

            double cosi = CalculUnit::unit.GetVectorCosinus(
                    reflect.getDirection(),
                    hit.getIncident_ray().getDirection()
            );

            if (print_debug)
                std::cout << "cosinus: " << cosi << std::endl;

            if (cosi >= CalculUnit::floatZero)
                specularFactor += intensity * pow(cosi, specularRadius);
//        }
    }
    double final_i  = (ambiant + diffuse * diffuseFactor + specular * specularFactor);

    if (print_debug)
        std::cout << "Final intensity: " << final_i << std::endl;
    toModify *= final_i;
}
