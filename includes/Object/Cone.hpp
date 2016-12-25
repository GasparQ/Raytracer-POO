//
// Created by gaspar on 09/10/2016.
//

#ifndef RAYTRACER_CONE_HPP
#define RAYTRACER_CONE_HPP

#include "Object/AObject.hpp"

class Cone : public AObject
{
public:
    Cone(
            Vector3<double> const &position = Vector3<double>::Zero,
            Vector3<double> const &rotation = Vector3<double>::Zero,
            Color const &color = Color::white,
            std::vector<IEffect *> const &effects = {},
            double phi = 320
    );
    Cone(Cone const &ref);

public:
    virtual Vector3<double> getNormalAt(Vector3<double> const &pos) const;
    virtual double getObjectDistance(Ray ray) const;

private:
    double phi;
    double sqrTanPhi;
};

#endif //RAYTRACER_CONE_HPP
