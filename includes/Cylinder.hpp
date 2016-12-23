//
// Created by gaspar on 08/10/2016.
//

#ifndef RAYTRACER_CYLINDER_HPP
#define RAYTRACER_CYLINDER_HPP

#include "AObject.hpp"

class Cylinder : public AObject
{
public:
    Cylinder(
            Vector3<double> const &pos = Vector3<double>::Zero,
            Vector3<double> const &rotation = Vector3<double>::Zero,
            Color const &color = Color::white,
            std::vector<IEffect *> const &effects = {},
            double radius = 50
    );
    Cylinder(Cylinder const &ref);

public:
    virtual Vector3<double> getNormalAt(Vector3<double> const &pos) const;

    virtual double getObjectDistance(Ray ray) const;

private:
    double radius;
};

#endif //RAYTRACER_CYLINDER_HPP
