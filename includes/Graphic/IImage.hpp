//
// Created by GasparQ on 07/03/2017.
//

#ifndef RAYTRACER_IIMAGE_HPP
#define RAYTRACER_IIMAGE_HPP

#include <stdexcept>
#include <Core/Color.hpp>
#include "GraphicException.hpp"
#include "IResizable.hpp"
#include "IMovable.hpp"

class IImage : public IResizable, public IMovable
{
public:
    virtual ~IImage(){}

    virtual void PutColorAt(Color color, Vector2<int> const &pix) throw(std::out_of_range) = 0;

    virtual Color const &GetColorAt(Vector2<int> const &pos) throw(std::out_of_range) = 0;

    virtual void *ConvertPixels(void) throw(GraphicException) = 0;
};

#endif //RAYTRACER_IIMAGE_HPP
