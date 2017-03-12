//
// Created by gaspar on 07/08/2016.
//

#include "Object/AObject.hpp"
#include <Core/CalculUnit.hpp>
#include <cmath>

/**
 * \brief Full and default constructor for AObject
 * \param position The position of the object
 * \param rotation The roation of the object
 * \param color The color of the object
 * \param effects The light effects that will be applyied on the object
 * \param added The object added to the object
 * \param subed The object substracted to the object
 * \param intersected The object intersected with the object
 */
AObject::AObject(const Vector3<double> &position, const Vector3<double> &rotation, const Color &color,
                 const std::vector<IEffect *> &effects) :
    intersection(0, 0, 0),
    position(position),
    rotation(rotation),
    color(color),
    effects(effects)
{

}

/**
 * \brief Copy constructor
 * \param ref The object to copy
 */
AObject::AObject(AObject const &ref) :
    AObject::AObject(ref.position, ref.rotation, ref.color, ref.effects)
{

}

/**
 * \brief Destructor
 */
AObject::~AObject()
{

}

/**
 * \brief Allow to add a new light effect to the object
 * \param effect The new effect you want to add
 */
void AObject::AddEffect(IEffect *effect)
{
    effects.push_back(effect);
}

Color AObject::ApplyEffectsAt(Vector3<double> const &point, Scene const &scene)
{
    return Color::white;
}

const Vector3<double> &AObject::getPosition() const
{
    return position;
}

void AObject::setPosition(const Vector3<double> &position)
{
    AObject::position = position;
}

const Vector3<double> &AObject::getRotation() const
{
    return rotation;
}

void AObject::setRotation(const Vector3<double> &rotation)
{
    AObject::rotation = rotation;
}

const Color &AObject::getColor() const
{
    return color;
}

void AObject::setColor(const Color &color)
{
    AObject::color = color;
}

const std::vector<IEffect *> &AObject::getEffects() const
{
    return effects;
}

const Color &AObject::getEnligthedColor(RaycastHit const &hit, Scene const &scene, Color &toret)
{
    for (IEffect *effect : effects)
    {
        effect->ResolveEffectAt(hit, scene, toret);
    }
    return toret;
}

const Color AObject::getEnligthedColor(RaycastHit const &hit, Scene const &scene)
{
    Color   toret = color;

    return getEnligthedColor(hit, scene, toret);
}

Vector2<int> AObject::get2DProjection(Vector3<double> const &isecPoint, Vector2<int> const &projectionDimmensions) const
{
    return Vector2<int>(
            static_cast<int>(std::abs(isecPoint.x / isecPoint.z)) % projectionDimmensions.x,
            static_cast<int>(std::abs(isecPoint.y / isecPoint.z)) % projectionDimmensions.y
    );
}
