//
// Created by GasparQ on 05/03/2017.
//

#ifndef RAYTRACER_RAYCASTHIT_HPP
#define RAYTRACER_RAYCASTHIT_HPP


#include <Object/AObject.hpp>

class RaycastHit
{
public:
    RaycastHit(AObject *obj = nullptr, Vector3<double> isec_point = Vector3<double>::Zero, Vector3<double> normal = Vector3<double>::Zero, Ray incident_ray = Ray());
    RaycastHit(RaycastHit const &ref);
    ~RaycastHit();

public:
    AObject *getTouched() const;

    void setTouched(AObject *touched);

    const Vector3<double> &getIsec_point() const;

    void setIsec_point(const Vector3<double> &isec_point);

    Vector3<double> &IsecPoint();

    const Vector3<double> &getNormal() const;

    void setNormal(const Vector3<double> &normal);

    Vector3<double> &Normal();

    const Ray &getIncident_ray() const;

    void setIncident_ray(const Ray &incident_ray);

public:
    std::ostream    &Print(std::ostream &output) const;

private:
    AObject *touched;
    Vector3<double> isec_point;
    Vector3<double> normal;
    Ray incident_ray;
};

std::ostream    &operator<<(std::ostream &output, RaycastHit const &ref);

#endif //RAYTRACER_RAYCASTHIT_HPP
