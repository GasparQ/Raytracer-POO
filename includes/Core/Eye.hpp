//
// Created by gaspar on 07/08/2016.
//

#ifndef RAYTRACER_EYE_HPP
#define RAYTRACER_EYE_HPP

#include "Vector3.hpp"
#include "Graphic/AImage.hpp"

class Scene;

class Eye
{
public:
    Eye(Vector3<double> const &position = Vector3<double>::Zero, Vector3<double> const &orientation = Vector3<double>::Zero, double screenDistance = 200);
    Eye(Eye const &ref);
    Eye &operator=(Eye const &ref);
    ~Eye();

public:
    const Vector3<double> & getPosition() const;

    void setPosition(const Vector3<double> &position);

    const Vector3<double> & getOrientation() const;

    void setOrientation(const Vector3<double> &orientation);

    double getScreenDistance() const;

    void setScreenDistance(double screenDistance);

public:
    void Render(Scene const &scene, IImage *image) const;

private:
    Vector3<double> position;
    Vector3<double> orientation;
    double screenDistance;
};

#endif //RAYTRACER_EYE_HPP
