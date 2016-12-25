//
// Created by gaspar on 07/08/2016.
//

#ifndef RAYTRACER_COLOR_HPP
#define RAYTRACER_COLOR_HPP

#include <stdint.h>

union Color
{
    static const Color white;
    static const Color black;
    static const Color red;
    static const Color green;
    static const Color blue;
    static const Color cyan;
    static const Color yellow;
    static const Color magenta;
    unsigned char composants[4];
    int32_t full;

public:
    Color(int32_t full);
    Color(unsigned char a = 0, unsigned char r = 0, unsigned char g = 0, unsigned char b = 0);
    Color(Color const &color);

public:
    Color &operator*=(double i);
    Color const &operator*(double i) const;
};

#endif //RAYTRACER_COLOR_HPP
