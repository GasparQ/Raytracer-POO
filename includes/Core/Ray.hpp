//
// Created by gaspar on 07/08/2016.
//

#ifndef RAYTRACER_RAY_HPP
#define RAYTRACER_RAY_HPP

#include "Vector3.hpp"

/**
 * \brief A Ray class that can be used for mathematical application
 */
class Ray
{
public:
    Ray(Vector3<double> const &point = Vector3<double>::Zero, Vector3<double> const &direction = Vector3<double>::Zero, double norm = 0);
    Ray(Ray const &ref);
    ~Ray();

public:
    Ray &operator=(Ray const &ref);

public:
    const Vector3<double> &getPoint() const;

    const Vector3<double> &getDirection() const;

    double getNorm() const;

    void setPoint(const Vector3<double> &point);

    void setDirection(const Vector3<double> &direction);

    void setNorm(double norm);

    void rotate(Vector3<double> const &rotation);
    void invertRotate(Vector3<double> const &rotation);

    void translate(Vector3<double> const &translation);
    void invertTranslate(Vector3<double> const &translation);

    Vector3<double> const &getFocusedPoint(void) const;

    Vector3<double> &Direction();
    Vector3<double> &Point();

public:
    std::ostream    &Print(std::ostream &output) const;

private:
    Vector3<double> point;
    Vector3<double> direction;
    Vector3<double> focus;
    double norm;
};

std::ostream    &operator<<(std::ostream &output, Ray const &);

#endif //RAYTRACER_RAY_HPP
