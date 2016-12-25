//
// Created by gaspar on 15/08/2016.
//

#include <Core/CalculUnit.hpp>
#include "Object/Sphere.hpp"

Sphere::Sphere(const Vector3<double> &pos, const Vector3<double> &rotation, const Color &color,
               const std::vector<IEffect *> &effects, double radius) :
    AObject(pos, rotation, color, effects),
    radius(radius)
{

}

Sphere::Sphere(Sphere const &ref) :
        Sphere::Sphere(ref.position, ref.rotation, ref.color, ref.effects, ref.radius)
{

}

Vector3<double> Sphere::getNormalAt(Vector3<double> const &pos) const
{
    return Vector3<double>(pos.x - position.x, pos.y - position.y, pos.z - position.z);
}

double Sphere::getObjectDistance(Ray ray) const
{
    double	param[3];
    double	results[2];

//    ray.invertTranslate(position);
//    ray.invertRotate(rotation);

    Vector3<double> const &dir = ray.getDirection();
    Vector3<double> const &point = ray.getPoint();

    param[0] = (
            dir.x * dir.x +
                    dir.y * dir.y +
                    dir.z * dir.z
    );
    param[1] = 2.0 * (
            point.x * dir.x +
                    point.y * dir.y +
                    point.z * dir.z
    );
    param[2] = (
            point.x * point.x +
                    point.y * point.y +
                    point.z * point.z -
                    radius * radius
    );
    CalculUnit::unit.ResolvePolynomDegree2(param, results);
    return (results[0]);
}

