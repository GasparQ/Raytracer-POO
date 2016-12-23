//
// Created by gaspar on 08/10/2016.
//

#ifndef RAYTRACER_PLAN_HPP
#define RAYTRACER_PLAN_HPP

#include "AObject.hpp"

class Plan : public AObject
{
public:
    Plan(
            Vector3<double> const &position = Vector3<double>::Zero,
            Vector3<double> const &rotation = Vector3<double>::Zero,
            Color const &color = Color::white,
            std::vector<IEffect *> const &effects = {},
            Vector3<double> const &norm = {0, 0, 1},
            double d = 0
    );
    Plan(Plan const &ref);

public:
    virtual Vector3<double> getNormalAt(Vector3<double> const &pos) const;

    virtual double getObjectDistance(Ray ray) const;

private:
    Vector3<double> norm;
    double d;
};

#endif //RAYTRACER_PLAN_HPP
