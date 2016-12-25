//
// Created by gaspar on 07/08/2016.
//

#ifndef RAYTRACER_SPOT_HPP
#define RAYTRACER_SPOT_HPP

#include "Color.hpp"
#include "Vector3.hpp"

class Spot
{
public:
    Spot(Vector3<double> const &position = Vector3<double>::Zero, Color const color = Color::white, double intensity = 1);
    Spot(Spot const &ref);
    Spot &operator=(Spot const &ref);
    ~Spot();

public:

    const Vector3<double> & getPosition() const;

    void setPosition(const Vector3<double> &position);

    const Color & getColor() const;

    void setColor(const Color &color);

    double getIntensity() const;

    void setIntensity(double intensity);

private:
    Vector3<double> position;
    Color   color;
    double intensity;
};

#endif //RAYTRACER_SPOT_HPP
