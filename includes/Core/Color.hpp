//
// Created by gaspar on 07/08/2016.
//

#ifndef RAYTRACER_COLOR_HPP
#define RAYTRACER_COLOR_HPP

#include <stdint.h>
#include <functional>

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
    Color operator*(double i) const;
    Color operator+(Color const &ref) const;
    Color &operator+=(Color const &ref);

private:
    template <typename T = int>
    void SafeOperation(unsigned char &opd, std::function<T(T)> const &opt)
    {
        T res = opt(static_cast<T>(opd));

        if (res >= 255)
            opd = 0xFF;
        else if (res <= 0)
            opd = 0x00;
        else
            opd = static_cast<unsigned char>(res);
    }
};

#endif //RAYTRACER_COLOR_HPP
