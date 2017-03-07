//
// Created by gaspar on 07/08/2016.
//

#include <Core/Ray.hpp>
#include <iostream>
#include <Core/CalculUnit.hpp>
#include "Core/Eye.hpp"
#include "Core/Scene.hpp"
#include "Object/AObject.hpp"

/**
 * \brief Full and default constructor for an eye
 * \param position The position of the eye
 * \param orientation The direction in which the eye is looking at
 * \param screenSize The size of the screen rendered
 * \param screenDistance The distance between the screen and the eye (FOV)
 */
Eye::Eye(const Vector3<double> &position, const Vector3<double> &orientation, double screenDistance) :
    position(position),
    orientation(orientation),
    screenDistance(screenDistance)
{

}

/**
 * \brief Copy constructor
 * \param ref The eye to copy
 */
Eye::Eye(Eye const &ref) :
    Eye(ref.position, ref.orientation, ref.screenDistance)
{

}

/**
 * \brief Desctructor
 */
Eye::~Eye()
{

}

/**
 * \brief Simple getter for position
 * \return The eye position
 */
const Vector3<double> &Eye::getPosition() const
{
    return position;
}

/**
 * \brief Simple setter for position
 * \param position The new position to set
 */
void Eye::setPosition(const Vector3<double> &position)
{
    Eye::position = position;
}

/**
 * \brief Simple getter for orientation
 * \return The orientation of the eye
 */
const Vector3<double> &Eye::getOrientation() const
{
    return orientation;
}

/**
 * \brief Simple setter for orientation
 * \param orientation The new orientation to set
 */
void Eye::setOrientation(const Vector3<double> &orientation)
{
    Eye::orientation = orientation;
}

/**
 * \brief Simple getter for screen distance
 * \return The distance between the screen and the eye
 */
double Eye::getScreenDistance() const
{
    return screenDistance;
}

/**
 * \brief Simple setter for screen distance
 * \param screenDistance The distance between the screen and the eye
 */
void Eye::setScreenDistance(double screenDistance)
{
    Eye::screenDistance = screenDistance;
}

Eye &Eye::operator=(Eye const &ref)
{
    position = ref.position;
    orientation = ref.orientation;
    screenDistance = ref.screenDistance;
    return *this;
}

extern bool print_debug;

void Eye::Render(Scene const &scene, IImage *image) const
{
    Ray                 ray(position);
    Vector3<double>     &dir = ray.Direction();
    RaycastHit          hit;
    AObject             *touched;

    Vector2<int> const  &imgSize = image->getSize();
    double              startX = imgSize.x / 2;
    double              startY = imgSize.y / 2;

    dir.x = screenDistance;
    for (int i = 0, max = imgSize.x * imgSize.y; i < max; ++i)
    {
        int x = i % imgSize.x, y = i / imgSize.x;

        if (x > 100 && x < 200 && y > 150 && y < 250)
        {
//            std::cout << "Pixel (" << x << ", " << y << ")" << std::endl;
//            print_debug = true;
        }
        else
        {
            print_debug = false;
        }
        dir.y = startX - x;
        dir.z = startY - y;
        hit = scene.RayCast(ray);
        touched = hit.getTouched();
        if (touched != NULL)
        {
//            ray.Point() -= touched->getPosition();
//            Vector3<double> normal = touched->getNormalAt(ray.getPoint());

//            CalculUnit::unit.rotate(normal, touched->getRotation());
//            CalculUnit::unit.rotate(ray.Point(), touched->getRotation());
//            CalculUnit::unit.GetUnitVector(normal);
            image->PutColorAt(touched->getEnligthedColor(hit, scene), {i % imgSize.x, i / imgSize.x});
        }
        else
        {
//            std::cout << "Nop" << std::endl;
            image->PutColorAt(Color::black, {i % imgSize.x, i / imgSize.x});
        }
    }
//    todo loop for rendering
}