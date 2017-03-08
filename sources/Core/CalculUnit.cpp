//
// Created by gaspar on 15/08/2016.
//

#include <limits>
#include <cmath>
#include <iostream>
#include "Core/CalculUnit.hpp"

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
    rotateAroundZ(torotate, -rotation.z * M_PI / 180.0);
    rotateAroundY(torotate, -rotation.y * M_PI / 180.0);
    rotateAroundX(torotate, -rotation.x * M_PI / 180.0);
}

void CalculUnit::rotateAroundX(Vector3<double> &torotate, double angle)
{
    double cosinus = CosOf(angle), sinus = SinOf(angle);
    double y = torotate.y, z = torotate.z;

    torotate.y = y * cosinus - z * sinus;
    torotate.z = y * sinus + z * cosinus;
}

void CalculUnit::rotateAroundY(Vector3<double> &torotate, double angle)
{
    double cosinus = CosOf(angle), sinus = SinOf(angle);
    double x = torotate.x, z = torotate.z;

    torotate.x = x * cosinus + z * sinus;
    torotate.z = -x * sinus + z * cosinus;
}

void CalculUnit::rotateAroundZ(Vector3<double> &torotate, double angle)
{
    double cosinus = CosOf(angle), sinus = SinOf(angle);
    double x = torotate.x, y = torotate.y;

    torotate.x = x * cosinus - y * sinus;
    torotate.y = x * sinus + y * cosinus;
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

Ray CalculUnit::GetReflectedRay(Ray const &incidentRay, Vector3<double> const &normal, double isUnit, Vector3<double> const &point)
{
    if (isUnit)
    {
        double scalaire = ScalarOf(normal, incidentRay.getDirection());

        return (Ray(point, normal * (scalaire * -2.0) + incidentRay.getDirection()));
    }

    Vector3<double> unitedNormal = GetUnitVector(normal);
    double scalaire = ScalarOf(unitedNormal, incidentRay.getDirection());

    return (Ray(point, unitedNormal * (scalaire * -2.0) + incidentRay.getDirection()));
}

extern bool print_debug;

/**
 * @brief Calculate the refracted ray of <incidentRay> with the <normal>
 * @param coeff1 The refraction coefficient of the last environment
 * @param coeff2 The refraction coefficient of the new environment
 * @param incidentRay The incident ray, the direction is from the application point to the intersection point
 * @param normal The normal at the intersection point
 * @param point The intersection point in order to give an application point to the refracted ray
 * @return The refracted ray with the right direction from <point> application point
 */
Ray CalculUnit::GetRefractedRay(double coeff1, double coeff2, Ray const &incidentRay, Vector3<double> const &normal,
                                const Vector3<double> &point)
{
    /*
     * C raytracer
     *
     * Normal : unitaire
     * Rayon incident : unitaire
     * Point d'intersection
     * Coefficient de réfraction de l'objet touché
     *
     * def:
     *      scalaire = ScalarOf(Normal, Rayon incident);
     *      if (scalaire < 0)
     *          scalaire = -scalaire
     *      Si récursion paire:
     *          Indice de réfraction = Coefficient de réfraction de l'objet touché / 1 (air)
     *      Sinon:
     *          Indice de réfraction = 1 (air) / Coefficient de réfraction de l'objet touché
     *      Incrémentation de la récursion
     *      Rayon réfracté.x = Indice de réfraction * Rayon incident.x + (Indice de réfraction * scalaire - sqrt(1 + Indice de réfraction² * (scalaire² - 1))) * Normal.x
     *      Rayon réfracté.y = Indice de réfraction * Rayon incident.y + (Indice de réfraction * scalaire - sqrt(1 + Indice de réfraction² * (scalaire² - 1))) * Normal.y
     *      Rayon réfracté.z = Indice de réfraction * Rayon incident.z + (Indice de réfraction * scalaire - sqrt(1 + Indice de réfraction² * (scalaire² - 1))) * Normal.z
     *
     *      Rayon réfracté.application = Point d'intersection
     */

    Vector3<double> incidentDir = GetUnitVector(incidentRay.getDirection());
    double scalaire = std::abs(ScalarOf(normal, incidentDir));
    double indic = coeff1 / coeff2;
    double toRoot = 1 + indic * indic * (scalaire * scalaire - 1);

    if (toRoot < CalculUnit::floatZero)
        return Ray(point, Vector3<double>::Zero);

    return Ray(point, incidentDir * indic + normal * (indic * scalaire - sqrt(toRoot)));
}

Vector3<double> CalculUnit::GetUnitVector(const Vector3<double> &vector)
{
    return (vector * (1.0 / sqrt(vector.x * vector.x + vector.y * vector.y + vector.z * vector.z)));
}



