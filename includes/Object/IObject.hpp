//
// Created by GasparQ on 07/03/2017.
//

#ifndef RAYTRACER_IOBJECT_HPP
#define RAYTRACER_IOBJECT_HPP

#include <vector>
#include <Effect/IEffect.hpp>
#include <Core/Color.hpp>
#include "ITransform.hpp"
#include "IColorable.hpp"

class IObject : public ITransform, public IColorable
{
public:
    virtual ~IObject(){}

public:
    virtual void            AddEffect(IEffect *effect) = 0;
    virtual const std::vector<IEffect *> &getEffects() const = 0;
    virtual Color           ApplyEffectsAt(Vector3<double> const &point, Scene const &scene) = 0;

public:
    virtual Vector3<double> getNormalAt(Vector3<double> const &pos) const = 0;
    virtual double getObjectDistance(Ray ray) const = 0;

public:
    virtual const Color &getEnligthedColor(RaycastHit const &hit, Scene const &scene, Color &toret) = 0;
    virtual const Color getEnligthedColor(RaycastHit const &hit, Scene const &scene) = 0;
};

#endif //RAYTRACER_IOBJECT_HPP