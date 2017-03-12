//
// Created by GasparQ on 08/03/2017.
//

#ifndef RAYTRACER_TEXTUREMAPPING_HPP
#define RAYTRACER_TEXTUREMAPPING_HPP

#include <memory>

#include <Graphic/IImage.hpp>
#include "IEffect.hpp"

class TextureMapping : public IEffect
{
public:
    explicit TextureMapping(IImage *img);
    virtual ~TextureMapping();

public:
    virtual void ResolveEffectAt(RaycastHit const &hit, Scene const &scene, Color &toModify);

private:
    std::unique_ptr<IImage> img;
};


#endif //RAYTRACER_TEXTUREMAPPING_HPP
