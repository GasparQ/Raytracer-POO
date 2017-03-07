//
// Created by gaspar on 07/08/2016.
//

#ifndef RAYTRACER_AIMAGE_HPP
#define RAYTRACER_AIMAGE_HPP

#include "IImage.hpp"

class AImage : public IImage
{
public:
    explicit AImage(Vector2<int> const &imgsize, Vector2<int> const &imgpos);
    virtual ~AImage();

public:
    void PutColorAt(Color color, Vector2<int> const &pix) throw(std::out_of_range);

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

#endif //RAYTRACER_AIMAGE_HPP
