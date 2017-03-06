//
// Created by gaspar on 07/08/2016.
//

#include "Core/Color.hpp"

const Color Color::white = 0x00FFFFFF;
const Color Color::black = 0x00000000;
const Color Color::red = 0x000000FF;
const Color Color::green = 0x0000FF00;
const Color Color::blue = 0x000000FF;
const Color Color::cyan = 0x0000FFFF;
const Color Color::yellow = 0x00FFFF00;
const Color Color::magenta = 0x00FF00FF;

Color::Color(int32_t full) :
        full(full)
{

}

Color::Color(unsigned char a, unsigned char r, unsigned char g, unsigned char b) :
        Color::Color((a << 24) | (b << 8) | (g << 8) | r)
{

}

Color::Color(Color const &color) :
        Color::Color(color.full)
{

}

Color &Color::operator*=(double i)
{
    for (int j = 0; j < 4; ++j)
    {
        double comp = static_cast<double>(composants[j]) * i;

        if (comp >= 255)
            composants[j] = 0xFF;
        else if (comp <= 0)
            composants[j] = 0x00;
        else
            composants[j] = static_cast<unsigned char>(comp);
    }
    return *this;
}

Color Color::operator*(double i) const
{
    Color cpy(*this);

    return (cpy *= i);
}

Color Color::operator+(Color const &ref) const
{
    Color cpy(*this);

    return cpy += ref;
}

Color &Color::operator+=(Color const &ref)
{
    composants[0] = ref.composants[0];
    composants[1] = ref.composants[1];
    composants[2] = ref.composants[2];
    composants[3] = ref.composants[3];
    return *this;
}