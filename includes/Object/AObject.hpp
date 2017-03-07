//
// Created by gaspar on 07/08/2016.
//

#ifndef RAYTRACER_AOBJECT_HPP
#define RAYTRACER_AOBJECT_HPP

#include "Core/Ray.hpp"
#include "Core/Scene.hpp"
#include "IObject.hpp"

class AObject : public IObject
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
    const std::vector<IEffect *> &getEffects() const;
    Color           ApplyEffectsAt(Vector3<double> const &point, Scene const &scene);

public:
    virtual Vector3<double> getNormalAt(Vector3<double> const &pos) const = 0;
    virtual double getObjectDistance(Ray ray) const = 0;

public:
    const Vector3<double> &getPosition() const;

    void setPosition(const Vector3<double> &position);

    const Vector3<double> &getRotation() const;

    void setRotation(const Vector3<double> &rotation);

public:
    const Color &getColor() const;

    void setColor(const Color &color);

public:
    const Color &getEnligthedColor(RaycastHit const &hit, Scene const &scene, Color &toret);

    const Color getEnligthedColor(RaycastHit const &hit, Scene const &scene);

private:
    Vector3<double>             intersection;

protected:
    Vector3<double>             position;
    Vector3<double>             rotation;
    Color                       color;
    std::vector<IEffect *>      effects;
//    std::vector<IObject *>      added;
//    std::vector<IObject *>      subed;
//    std::vector<IObject *>      intersected;
};

#endif //RAYTRACER_AOBJECT_HPP
