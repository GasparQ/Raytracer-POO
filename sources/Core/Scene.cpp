//
// Created by gaspar on 07/08/2016.
//

#include <limits>
#include <Core/CalculUnit.hpp>
#include <iostream>
#include "Core/Scene.hpp"
#include "Core/Eye.hpp"
#include "Core/Spot.hpp"
#include "Object/AObject.hpp"

/**
 * \brief Default constructor
 */
Scene::Scene()
{

}

/**
 * \brief Copy constructor
 * \param ref The scene to copy
 */
Scene::Scene(Scene const &ref) :
    eyes(ref.eyes),
    spots(ref.spots),
    objects(ref.objects)
{

}

/**
 * \brief Copy operator
 * \param ref The scene to copy
 * \return A reference on this
 */
Scene &Scene::operator=(Scene const &ref)
{
    eyes = ref.eyes;
    spots = ref.spots;
    objects = ref.objects;
    return *this;
}

/**
 * \brief Destructor
 */
Scene::~Scene()
{
    for (Eye *torm : eyes)
    {
        delete(torm);
    }
    for (Spot *torm : spots)
    {
        delete(torm);
    }
    for (AObject *torm : objects)
    {
        delete(torm);
    }
}

/**
 * \brief Add an eye to the scene
 */
void Scene::AddEye(Eye *eye)
{
    eyes.push_back(eye);
}

/**
 * \brief Add a spot to the scene
 */
void Scene::AddSpot(Spot *spot)
{
    spots.push_back(spot);
}

/**
 * \brief Add an object to the scene
 */
void Scene::AddObject(AObject *obj)
{
    objects.push_back(obj);
}

const std::vector<Eye *> &Scene::getEyes() const
{
    return eyes;
}

extern bool print_debug;

RaycastHit Scene::RayCast(Ray &ray) const
{
    Ray tocast;
    double k = 0, lambda = 0;
    RaycastHit toret;

//    std::cout << "Casting ray: " << ray << std::endl;

    for (AObject *currObject : objects)
    {
        tocast = ray;

//        std::cout << "Copy: " << tocast << std::endl;

//        std::cout << "Object position: " << currObject->getPosition() << std::endl;

        //cf objects.c from C raytracer
        tocast.Point() -= currObject->getPosition(); //invert translate the point from object origin
        CalculUnit::unit.invertRotate(tocast.Point(), currObject->getRotation()); //invert rotate the point from object rotation
        CalculUnit::unit.invertRotate(tocast.Direction(), currObject->getRotation()); //invert rotate the direction from the object rotation

//        std::cout << "After bullshit: " << tocast << std::endl;
//        std::cout << "Object position: " << currObject->getPosition() << std::endl;

        k = currObject->getObjectDistance(tocast);

//        std::cout << "Distance: " << k << std::endl;

        if (k > CalculUnit::floatZero && (toret.getTouched() == nullptr || k < lambda))
        {
            lambda = k;
            tocast.setNorm(lambda);

            //Object avec intersection et normales pour une position une rotation en (0, 0, 0)
            toret.setTouched(currObject);
            toret.setNormal(currObject->getNormalAt(tocast.getFocusedPoint()));
            toret.setIsec_point(tocast.getFocusedPoint());

//            std::cout << "Object position: " << toret.getTouched()->getPosition() << std::endl;
//            std::cout << "Hit inside loop: " << toret << std::endl;
        }
    }
    if (toret.getTouched() != nullptr)
    {
        ray.setNorm(lambda);
        if (print_debug)
            std::cout << "Distance: " << lambda << std::endl;

//        std::cout << "Hit before bullshit: " << toret << std::endl;
        //Remise des valeurs de normales et des points d'intersection en position réelle
        //cf resolve_light.c in C raytracer
//        std::cout << "Normal before: " << toret.Normal() << std::endl;
        CalculUnit::unit.rotate(toret.Normal(), toret.getTouched()->getRotation());
//        std::cout << "Normal after: " << toret.Normal() << std::endl;
        CalculUnit::unit.rotate(toret.IsecPoint(), toret.getTouched()->getRotation());
        toret.IsecPoint() += toret.getTouched()->getPosition();
//        toret.setIsec_point(ray.getFocusedPoint());

//        std::cout << "Hit after bullshit: " << toret << std::endl;
//        std::cout << "Object position: " << toret.getTouched()->getPosition() << std::endl;
    }
    toret.setIncident_ray(ray);
    return toret;
}

const std::vector<Spot *> &Scene::getSpots() const
{
    return spots;
}