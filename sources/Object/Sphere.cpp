//
// Created by gaspar on 15/08/2016.
//

#include <Core/CalculUnit.hpp>
#include <cmath>
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
    return Vector3<double>(pos.x, pos.y, pos.z);
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

Vector2<int> Sphere::get2DProjection(Vector3<double> const &isecPoint, Vector2<int> const &projectionDimmensions) const
{
    /*
     * C raytracer Sphere mapping
     *
     * t_vector2	text_pos;
     *
     * isec_point = unit_vec(isec_point);
     * text_pos.x = atan2(isec_point.y, isec_point.x);
     * if (text_pos.x < 0)
     *      text_pos.x += (2 * M_PI);
     * text_pos.x /= (2 * M_PI);
     * text_pos.y = acos(isec_point.z) / M_PI;
     * text_pos.x *= texture->wdth / 4;
     * text_pos.y *= texture->hght;
     *
     */

    Vector3<double> unitIsec = CalculUnit::unit.GetUnitVector(isecPoint);
    double  x, y;

    x = atan2(unitIsec.y, unitIsec.x);
    if (x < CalculUnit::floatZero)
        x += (2 * M_PI);
    x /= (2 * M_PI);
    y = acos(unitIsec.z) / M_PI;
    x *= projectionDimmensions.x / 4.0;
    y *= projectionDimmensions.y;

    return Vector2<int>(static_cast<int>(x), static_cast<int>(y));
}

