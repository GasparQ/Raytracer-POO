//
// Created by gaspar on 07/08/2016.
//

#include <limits>
#include <Core/CalculUnit.hpp>
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

AObject *Scene::RayCast(Ray &ray) const
{
    Ray tosend;
    double lambda = std::numeric_limits<double>::max(), k;
    AObject *touched = NULL;

    for (AObject *currObject : objects)
    {
        tosend = ray;
        tosend.Point() -= currObject->getPosition();
        CalculUnit::unit.invertRotate(tosend.Point(), currObject->getRotation());
        k = currObject->getObjectDistance(tosend);
        if (k >= CalculUnit::floatZero && k < lambda)
        {
            lambda = k;
            touched = currObject;
        }
    }
    if (lambda >= CalculUnit::floatZero)
        ray.setNorm(lambda);
    return touched;
}

const std::vector<Spot *> &Scene::getSpots() const
{
    return spots;
}