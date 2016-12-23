//
// Created by gaspar on 08/10/2016.
//

#include <CalculUnit.hpp>
#include "Plan.hpp"

Plan::Plan(const Vector3<double> &position, const Vector3<double> &rotation, const Color &color,
           const std::vector<IEffect *> &effects, const Vector3<double> &norm, double d) :
    AObject(position, rotation, color, effects),
    norm(norm),
    d(d)
{

}

Plan::Plan(Plan const &ref) :
    Plan(ref.position, ref.rotation, ref.color, ref.effects, ref.norm, ref.d)
{

}

Vector3<double> Plan::getNormalAt(Vector3<double> const &pos) const
{
    return norm;
}

double Plan::getObjectDistance(Ray ray) const
{
    Vector3<double> const &dir = ray.getDirection();
    Vector3<double> const &point = ray.getPoint();
    double k;

    k = -1 * (
            (
                    norm.x * point.x
                    + norm.y * point.y
                    + norm.z * point.z
                    + d
            )
            / (
                    norm.x * dir.x
                    + norm.y * dir.y
                    + norm.z * dir.z
            )
    );
    if (k >= CalculUnit::floatZero)
        return (k);
    return -1.0;
}