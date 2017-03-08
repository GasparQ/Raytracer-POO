//
// Created by gaspar on 15/08/2016.
//

#ifndef RAYTRACER_CALCULUNIT_HPP
#define RAYTRACER_CALCULUNIT_HPP

#include <map>
#include "Core/Vector3.hpp"
#include "Core/Ray.hpp"

class CalculUnit
{
public:
    static CalculUnit   unit;
    static const double floatZero;

public:
    CalculUnit();
    ~CalculUnit();

public:
    void rotate(Vector3<double> &torotate, Vector3<double> const &rotation);
    void invertRotate(Vector3<double> &torotate, Vector3<double> const &rotation);

public:
    void ResolvePolynomDegree2(double param[3], double *results) const;

public:
    double GetVectorCosinus(Vector3<double> const &first, Vector3<double> const &second);
    Ray GetReflectedRay(Ray const &incidentRay, Vector3<double> const &normal, double isUnit = true, Vector3<double> const &point = Vector3<double>::Zero);
    Ray GetRefractedRay(double coeff1, double coeff2, Ray const &incidentRay, Vector3<double> const &normal, Vector3<double> const &point = Vector3<double>::Zero);
    Vector3<double> GetUnitVector(Vector3<double> const &vector);

private:
    void rotateAroundX(Vector3<double> &torotate, double angle);
    void rotateAroundY(Vector3<double> &torotate, double angle);
    void rotateAroundZ(Vector3<double> &torotate, double angle);

private:
    double ScalarOf(Vector3<double> const &first, Vector3<double> const &second) const;
    double NormOf(Vector3<double> const &vector);

private:
    double CosOf(double angle);
    double SinOf(double angle);

//private:
//    std::map<double, double>    sinuses;
//    std::map<double, double>    cosinuses;
//    std::map<double, double>    norms;
};

#endif //RAYTRACER_CALCULUNIT_HPP
