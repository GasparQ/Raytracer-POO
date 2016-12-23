//
// Created by gaspar on 15/08/2016.
//

#ifndef RAYTRACER_SPHERE_HPP
#define RAYTRACER_SPHERE_HPP

#include "AObject.hpp"

class Sphere : public AObject
{
public:
    Sphere(Vector3<double> const &pos = Vector3<double>::Zero,
           Vector3<double> const &rotation = Vector3<double>::Zero,
           Color const &color = Color::white, std::vector<IEffect *> const &effects = {}, double radius = 100);
    Sphere(Sphere const &ref);

public:
    virtual Vector3<double> getNormalAt(Vector3<double> const &pos) const;

    virtual double          getObjectDistance(Ray ray) const;

private:
    double radius;
};

#endif //RAYTRACER_SPHERE_HPP
