//
// Created by gaspar on 07/08/2016.
//

#ifndef RAYTRACER_IIMAGE_HPP
#define RAYTRACER_IIMAGE_HPP

#include <stdexcept>
#include "Core/Vector3.hpp"
#include "Core/Color.hpp"
#include "GraphicException.hpp"

class AImage
{
public:
    explicit AImage(Vector2<int> const &imgsize, Vector2<int> const &imgpos);
    virtual ~AImage();
    void PutColorAt(Color color, Vector2<int> const &pix) throw(std::out_of_range);

    virtual void *ConvertPixels(void) throw(GraphicException) = 0;

public:
    const Vector2<int> & getSize() const;

    void setSize(const Vector2<int> &size);

    const Vector2<int> & getPos() const;

    void setPos(const Vector2<int> &pos);

private:
    Vector2<int>     size;
    Vector2<int>     pos;

protected:
    Color   *pixels;
};

#endif //RAYTRACER_IIMAGE_HPP
