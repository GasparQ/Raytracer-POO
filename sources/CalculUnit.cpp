//
// Created by gaspar on 15/08/2016.
//

#include <cmath>
#include <SDL/SDL_stdinc.h>
#include <limits>
#include "CalculUnit.hpp"

CalculUnit      CalculUnit::unit;
const double    CalculUnit::floatZero = 0.000001;

CalculUnit::CalculUnit()
{

}

CalculUnit::~CalculUnit()
{

}

void CalculUnit::rotate(Vector3<double> &torotate, Vector3<double> const &rotation)
{
    rotateAroundX(torotate, rotation.x * M_PI / 180.0);
    rotateAroundY(torotate, rotation.y * M_PI / 180.0);
    rotateAroundZ(torotate, rotation.z * M_PI / 180.0);
}

void CalculUnit::invertRotate(Vector3<double> &torotate, Vector3<double> const &rotation)
{
    rotateAroundZ(torotate, rotation.z * M_PI / 180.0);
    rotateAroundY(torotate, rotation.y * M_PI / 180.0);
    rotateAroundX(torotate, rotation.x * M_PI / 180.0);
}

void CalculUnit::rotateAroundX(Vector3<double> &torotate, double angle)
{
    double cosinus = CosOf(angle), sinus = SinOf(angle);

    torotate.y = torotate.y * cosinus - torotate.z * sinus;
    torotate.z = torotate.y * sinus + torotate.z * cosinus;
}

void CalculUnit::rotateAroundY(Vector3<double> &torotate, double angle)
{
    double cosinus = CosOf(angle), sinus = SinOf(angle);

    torotate.x = torotate.x * cosinus + torotate.z * sinus;
    torotate.z = -torotate.x * sinus + torotate.z * cosinus;
}

void CalculUnit::rotateAroundZ(Vector3<double> &torotate, double angle)
{
    double cosinus = CosOf(angle), sinus = SinOf(angle);

    torotate.x = torotate.x * cosinus - torotate.y * sinus;
    torotate.y = torotate.x * sinus + torotate.y * cosinus;
}

double CalculUnit::CosOf(double angle)
{
    double cosinus;

    cosinus = cos(angle);
    return cosinus;
}

double CalculUnit::SinOf(double angle)
{
    double sinus;

    sinus = sin(angle);
    return sinus;
}

void CalculUnit::ResolvePolynomDegree2(double *param, double *results) const
{
    double	delta;
    double	sqt;

    results[0] = -1.0;
    results[1] = -1.0;
    delta = param[1] * param[1] - (4.0 * param[0] * param[2]);
    if (delta >= 0)
    {
        sqt = sqrt(delta);
        results[0] = (-param[1] + sqt) / (2.0 * param[0]);
        results[1] = (-param[1] - sqt) / (2.0 * param[0]);
        if (results[1] < results[0] && results[1] > CalculUnit::floatZero)
        {
            sqt = results[0];
            results[0] = results[1];
            results[1] = sqt;
        }
    }
}

double CalculUnit::GetVectorCosinus(Vector3<double> const &first, Vector3<double> const &second)
{
    return ScalarOf(first, second) / (NormOf(first) * NormOf(second));
}

double CalculUnit::ScalarOf(Vector3<double> const &first, Vector3<double> const &second) const
{
    return first.x * second.x + first.y * second.y + first.z * second.z;
}

double CalculUnit::NormOf(Vector3<double> const &vector)
{
    double norm;

    norm = sqrt(vector.x * vector.x + vector.y * vector.y + vector.z * vector.z);
    return norm;
}

Ray CalculUnit::GetReflectedRay(Ray const &incidentRay, Vector3<double> const &normal, double isUnit)
{
    if (isUnit)
    {
        double scalaire = ScalarOf(normal, incidentRay.getDirection());

        return (Ray(incidentRay.getPoint(), normal * (scalaire * -2.0) + incidentRay.getDirection()));
    }

    Vector3<double> unitedNormal = GetUnitVector(normal);
    double scalaire = ScalarOf(unitedNormal, incidentRay.getDirection());

    return (Ray(incidentRay.getPoint(), unitedNormal * (scalaire * -2.0) + incidentRay.getDirection()));
}

Vector3<double> CalculUnit::GetUnitVector(const Vector3<double> &vector)
{
    return (vector * (1.0 / sqrt(vector.x * vector.x + vector.y * vector.y + vector.z * vector.z)));
}


