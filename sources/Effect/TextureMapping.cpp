//
// Created by GasparQ on 08/03/2017.
//

#include "Effect/TextureMapping.hpp"
#include "Core/RaycastHit.hpp"

TextureMapping::TextureMapping(IImage *img) :
    img(img)
{

}

TextureMapping::~TextureMapping()
{

}

void TextureMapping::ResolveEffectAt(RaycastHit const &hit, Scene const &scene, Color &toModify)
{
    Vector2<int>    proj = hit.getTouched()->get2DProjection(hit.getIsec_point(), img->getSize());

    try
    {
        toModify = img->GetColorAt(proj);
    }
    catch (std::out_of_range const &) { }
}
