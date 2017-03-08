//
// Created by gaspar on 07/08/2016.
//

#ifndef RAYTRACER_VECTOR2_HPP
#define RAYTRACER_VECTOR2_HPP

/**
 * \brief Basic Vector2 class. Can be used for 2d positions, etc...
 */
template <typename T>
class Vector2
{
public:
    static const Vector2 Zero;
    static const Vector2 Up;
    static const Vector2 Down;
    static const Vector2 Left;
    static const Vector2 Right;

public:
    T x, y;

public:
    /**
     * \brief Constructor and default constructor to define x and y of vector
     * \param x X value of the vector
     * \param y Y value of the vector
     */
    Vector2(T x, T y) :
            x(x),
            y(y)
    {

    }

    /**
     * \brief Copy constructor
     * \param ref The vector to copy
     */
    Vector2(Vector2 const &ref = Vector2<T>::Zero) :
            Vector2(ref.x, ref.y)
    {

    }

    /**
     * \brief Destructor
     */
    ~Vector2()
    {

    }

public:
    /**
     * \brief Typical addition operator for vectors, add x and y to param x and y
     * \param toadd The vector to add
     * \return A vector resulting of the addition between 'this' and 'toadd'
     */
    Vector2 operator+(Vector2 const &toadd) const
    {
        return Vector2(x + toadd.x, y + toadd.y);
    }

    /**
     * \brief Typical substraction operator for vectors, sub x and y to param x and y
     * \param tosub The vector to substract
     * \return A vector resulting of the substraction between 'this' and 'tosub'
     */
    Vector2 operator-(Vector2 const &tosub) const
    {
        return Vector2(x - tosub.x, y - tosub.y);
    }

    /**
     * \brief Typical multiplication operator for vectors, mult fact to x and y
     * \param fact The factor to multiply
     * \return A vector with x and y multiplied to fact
     */
    Vector2 operator*(T fact) const
    {
        return Vector2(x * fact, y * fact);
    }

    /**
     * \brief Typical division operator for vectors, divide div to x and y
     * \param div The divider
     * \return A vector with x and y divided by div
     */
    Vector2 operator/(T div) const
    {
        return Vector2(x / div, y / div);
    }

public:
    /**
     * \brief Typical add-equal operator for vectors, same thing than addition but add it directly to 'this'
     * \param toadd The vector to add
     * \return A reference on 'this'
     */
    Vector2 &operator+=(Vector2 const &toadd)
    {
        x += toadd.x;
        y += toadd.y;
        return *this;
    }

    /**
     * \brief Typical sub-equal operator for vectors, same thing than substraction but sub it directly to 'this'
     * \param tosub The vector to substract
     * \return A reference on 'this'
     */
    Vector2 &operator-=(Vector2 const &tosub)
    {
        x -= tosub.x;
        y -= tosub.y;
        return *this;
    }

    /**
     * \brief Typical mult-equal operator for vectors, same thing than multiplication but mult it directly to 'this'
     * \param fact The factor to multiply
     * \return A reference on 'this'
     */
    Vector2 &operator*=(double fact)
    {
        x *= fact;
        y *= fact;
        return *this;
    }

    /**
     * \brief Typical div-equal operator for vectors, same thing than division but div it directly to 'this'
     * \param div The divider
     * \return A reference on 'this'
     */
    Vector2 &operator/=(double div)
    {
        x /= div;
        y /= div;
        return *this;
    }
};

#endif //RAYTRACER_VECTOR2_HPP
