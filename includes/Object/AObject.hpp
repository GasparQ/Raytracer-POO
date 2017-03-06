//
// Created by gaspar on 07/08/2016.
//

#ifndef RAYTRACER_AOBJECT_HPP
#define RAYTRACER_AOBJECT_HPP

#include <vector>
#include "Core/Vector3.hpp"
#include "Core/Color.hpp"
#include "Effect/IEffect.hpp"
#include "Core/Ray.hpp"
#include "Core/Scene.hpp"

class AObject
{
public:
    AObject(Vector3<double> const &position = Vector3<double>::Zero,
            Vector3<double> const &rotation = Vector3<double>::Zero,
            Color const &color = Color::white,
            std::vector<IEffect *> const &effects = {});
    AObject(AObject const &ref);
    virtual ~AObject();

public:
    void            AddEffect(IEffect *effect);
    Color           ApplyEffectsAt(Vector3<double> const &point, Scene const &scene);

public:
    virtual Vector3<double> getNormalAt(Vector3<double> const &pos) const = 0;
    virtual double getObjectDistance(Ray ray) const = 0;

public:
    const Vector3<double> &getPosition() const
    {
        return position;
    }

    void setPosition(const Vector3<double> &position)
    {
        AObject::position = position;
    }

    const Vector3<double> &getRotation() const
    {
        return rotation;
    }

    void setRotation(const Vector3<double> &rotation)
    {
        AObject::rotation = rotation;
    }

    const Color &getColor() const
    {
        return color;
    }

    void setColor(const Color &color)
    {
        AObject::color = color;
    }

    const std::vector<IEffect *> &getEffects() const
    {
        return effects;
    }

public:
    const Color &getEnligthedColor(RaycastHit const &hit, Scene const &scene, Color &toret)
    {
        for (IEffect *effect : effects)
        {
            effect->ResolveEffectAt(hit, scene, toret);
        }
        return toret;
    }

    const Color getEnligthedColor(RaycastHit const &hit, Scene const &scene)
    {
        Color   toret = color;

        return getEnligthedColor(hit, scene, toret);
    }

private:
    Vector3<double>             intersection;

protected:
    Vector3<double>             position;
    Vector3<double>             rotation;
    Color                       color;
    std::vector<IEffect *>      effects;
//    std::vector<AObject *>      added;
//    std::vector<AObject *>      subed;
//    std::vector<AObject *>      intersected;
};

#endif //RAYTRACER_AOBJECT_HPP
