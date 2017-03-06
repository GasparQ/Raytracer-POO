//
// Created by GasparQ on 05/03/2017.
//

#include <Core/CalculUnit.hpp>
#include "Core/RaycastHit.hpp"

RaycastHit::RaycastHit(AObject *obj, Vector3<double> isec_point, Vector3<double> normal, Ray incident_ray) :
    touched(obj),
    isec_point(isec_point),
    normal(CalculUnit::unit.GetUnitVector(normal)),
    incident_ray(incident_ray)
{

}

RaycastHit::RaycastHit(RaycastHit const &ref) :
    RaycastHit(ref.touched, ref.isec_point, ref.normal, ref.incident_ray)
{

}

RaycastHit::~RaycastHit()
{

}

AObject *RaycastHit::getTouched() const
{
    return touched;
}

void RaycastHit::setTouched(AObject *touched)
{
    RaycastHit::touched = touched;
}

const Vector3<double> &RaycastHit::getIsec_point() const
{
    return isec_point;
}

void RaycastHit::setIsec_point(const Vector3<double> &isec_point)
{
    RaycastHit::isec_point = isec_point;
}

Vector3<double> &RaycastHit::IsecPoint()
{
    return isec_point;
}

const Vector3<double> &RaycastHit::getNormal() const
{
    return normal;
}

Vector3<double> &RaycastHit::Normal()
{
    return normal;
}

void RaycastHit::setNormal(const Vector3<double> &normal)
{
    RaycastHit::normal = CalculUnit::unit.GetUnitVector(normal);
}

const Ray &RaycastHit::getIncident_ray() const
{
    return incident_ray;
}

void RaycastHit::setIncident_ray(const Ray &incident_ray)
{
    RaycastHit::incident_ray = incident_ray;
}

std::ostream &RaycastHit::Print(std::ostream &output) const
{
    output << "{obj: " << touched << ", isec: " << isec_point << ", normal: " << normal << ", incid_ray: " << incident_ray << "}";
    return output;
}

std::ostream    &operator<<(std::ostream &output, RaycastHit const &ref)
{
    return ref.Print(output);
}