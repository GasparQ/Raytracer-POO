//
// Created by gaspar on 08/10/2016.
//

#include <Core/CalculUnit.hpp>
#include "Object/Cylinder.hpp"

Cylinder::Cylinder(const Vector3<double> &pos, const Vector3<double> &rotation, const Color &color,
                   const std::vector<IEffect *> &effects, double radius) :
    AObject(pos, rotation, color, effects),
    radius(radius)
{

}

Cylinder::Cylinder(Cylinder const &ref) :
    Cylinder(ref.position, ref.rotation, ref.color, ref.effects, ref.radius)
{

}

Vector3<double> Cylinder::getNormalAt(Vector3<double> const &pos) const
{
    return Vector3<double>(pos.x, pos.y, 0);
}

double Cylinder::getObjectDistance(Ray ray) const
{
    Vector3<double> const &dir = ray.getDirection();
    Vector3<double> const &point = ray.getPoint();
    double results[2];
    double param[3] = {
            dir.x * dir.x + dir.y * dir.y,
            2.0 * (dir.x * point.x + dir.y * point.y),
            point.x * point.x + point.y * point.y - radius * radius
    };

    CalculUnit::unit.ResolvePolynomDegree2(param, results);
    return results[0];
}