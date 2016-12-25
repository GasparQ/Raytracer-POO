//
// Created by gaspar on 07/08/2016.
//

#include "Core/Spot.hpp"

/**
 * \brief Full and default constructor for the spot
 * \param position The position of the spot
 * \param color The color of the spot
 * \param intensity The intensity of the spot
 */
Spot::Spot(const Vector3<double> &position, Color const color, double intensity) :
    position(position),
    color(color),
    intensity(intensity)
{

}

/**
 * \brief Copy constructor for spot
 * \param ref The spot to copy
 */
Spot::Spot(Spot const &ref) :
        Spot::Spot(ref.position, ref.color, ref.intensity)
{

}

/**
 * \brief Copy operator for the spot
 * \param ref The spot to copy
 * \return A reference on this
 */
Spot &Spot::operator=(Spot const &ref)
{
    position = ref.position;
    color = ref.color;
    intensity = ref.intensity;
    return *this;
}

/**
 * \brief Destructor
 */
Spot::~Spot()
{

}

const Vector3<double> &Spot::getPosition() const
{
    return position;
}

void Spot::setPosition(const Vector3<double> &position)
{
    Spot::position = position;
}

const Color &Spot::getColor() const
{
    return color;
}

void Spot::setColor(const Color &color)
{
    Spot::color = color;
}

double Spot::getIntensity() const
{
    return intensity;
}

void Spot::setIntensity(double intensity)
{
    Spot::intensity = intensity;
}