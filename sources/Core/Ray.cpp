//
// Created by gaspar on 07/08/2016.
//

#include <cmath>
#include <Core/CalculUnit.hpp>
#include "Core/Ray.hpp"

/**
 * \brief Basic and default constructor for a ray
 * \param point The application point of the ray
 * \param direction The direction of the ray
 * \param norm The length of the ray
 */
Ray::Ray(const Vector3<double> &point, const Vector3<double> &direction, double norm) :
    point{point},
    direction{CalculUnit::unit.GetUnitVector(direction)},
    focus{Vector3<double>::Zero},
    norm{norm}
{
    setNorm(norm);
}

/**
 * \brief Copy constructor for point, direction and norm
 */
Ray::Ray(Ray const &ref) :
    Ray::Ray(ref.point, ref.direction, ref.norm)
{

}

/**
 * \brief Destructor
 */
Ray::~Ray()
{

}

Ray &Ray::operator=(Ray const &ref)
{
    setPoint(ref.point);
    setDirection(ref.direction);
    setNorm(ref.norm);
    return *this;
}

/**
 * \brief Simple getter for application point
 * \return The application point
 */
const Vector3<double> &Ray::getPoint() const
{
    return point;
}

/**
 * \brief Simple setter for application point
 * \param point The new point to set
 */
void Ray::setPoint(const Vector3<double> &point)
{
    Ray::point = point;
}

/**
 * \brief Simple setter for direction
 * \param direction The new direction to set
 */
void Ray::setDirection(const Vector3<double> &direction)
{
    Ray::direction = CalculUnit::unit.GetUnitVector(direction);
}

/**
 * \brief Simple getter for direction
 * \return The direction of the ray
 */
const Vector3<double> &Ray::getDirection() const
{
    return direction;
}

/**
 * \brief Simple getter of the norm (length)
 * \return The norm of the ray
 */
double Ray::getNorm() const
{
    return norm;
}

/**
 * \brief Simple setter of the norm (length)
 * \param norm The new norm to set
 */
void Ray::setNorm(double norm)
{
    Ray::norm = norm;
    focus = point + direction * norm;
}

void Ray::rotate(Vector3<double> const &rotation)
{
    CalculUnit::unit.rotate(point, rotation);
    CalculUnit::unit.rotate(direction, rotation);
}

void Ray::invertRotate(Vector3<double> const &rotation)
{
    CalculUnit::unit.invertRotate(point, rotation);
    CalculUnit::unit.invertRotate(direction, rotation);
}

void Ray::translate(Vector3<double> const &translation)
{
    point += translation;
}

void Ray::invertTranslate(Vector3<double> const &translation)
{
    point -= translation;
}

Vector3<double> &Ray::Direction()
{
    return direction;
}

Vector3<double> const &Ray::getFocusedPoint() const
{
    return focus;
}

Vector3<double> &Ray::Point()
{
    return point;
}

std::ostream &Ray::Print(std::ostream &output) const
{
    output << "{point: " << point << ", dir: " << direction << "}";
    return output;
}

std::ostream    &operator<<(std::ostream &output, Ray const &ref)
{
    return ref.Print(output);
}