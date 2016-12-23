//
// Created by gaspar on 09/10/2016.
//

#include <cmath>
#include <CalculUnit.hpp>
#include "Cone.hpp"

Cone::Cone(const Vector3<double> &position, const Vector3<double> &rotation, const Color &color,
           const std::vector<IEffect *> &effects, double phi) :
    AObject(position, rotation, color, effects),
    phi(phi),
    sqrTanPhi(pow(tan(phi), 2))
{

}

Cone::Cone(Cone const &ref) :
    Cone(ref.position, ref.rotation, ref.color, ref.effects, ref.phi)
{

}

Vector3<double> Cone::getNormalAt(Vector3<double> const &pos) const
{
    return Vector3<double>(pos.x, pos.y, -pos.z * sqrTanPhi);
}

double Cone::getObjectDistance(Ray ray) const
{
    Vector3<double> const &dir = ray.getDirection();
    Vector3<double> const &point = ray.getPoint();

    double results[2];
    double param[3] = {
            dir.x * dir.x + dir.y * dir.y - dir.z * dir.z * sqrTanPhi,
            2.0 * (
                    point.x * dir.x + point.y * dir.y - point.z * dir.z * sqrTanPhi
            ),
            point.x * point.x + point.y * point.y - point.z * point.z * sqrTanPhi
    };

    CalculUnit::unit.ResolvePolynomDegree2(param, results);
    return results[0];
}