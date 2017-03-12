//
// Created by gaspar on 14/08/2016.
//

#include <cstring>
#include "Graphic/AImage.hpp"

AImage::AImage(Vector2<int> const &imgsize, Vector2<int> const &imgpos) :
    size(imgsize),
    pos(imgpos)
{
    pixels = new Color[size.x * size.y]();
    std::memset(pixels, 0, sizeof(*pixels) * size.x * size.y);
}

AImage::~AImage()
{
    delete [] pixels;
}

void AImage::setPos(const Vector2<int> &pos)
{
    AImage::pos = pos;
}

const Vector2<int> &AImage::getPos() const
{
    return pos;
}

void AImage::setSize(const Vector2<int> &size)
{
    AImage::size = size;
}

const Vector2<int> &AImage::getSize() const
{
    return size;
}

void AImage::PutColorAt(Color color, Vector2<int> const &pix) throw(std::out_of_range)
{
    if (pix.x > getSize().x || pix.y > getSize().y || pix.x < 0 || pix.y < 0)
        throw new std::out_of_range("Pixel is out of image range");
    pixels[pix.y * getSize().x + pix.x] = color;
}

Color const &AImage::GetColorAt(Vector2<int> const &pos) throw(std::out_of_range)
{
    if (pos.x > getSize().x || pos.y > getSize().y || pos.x < 0 || pos.y < 0)
        throw new std::out_of_range("Pixel is out of image range");
    return pixels[pos.y * getSize().x + pos.x];
}
