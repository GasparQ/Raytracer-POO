//
// Created by gaspar on 07/08/2016.
//

#ifndef RAYTRACER_VECTOR3_HPP
#define RAYTRACER_VECTOR3_HPP

#include <fstream>
#include "Core/Vector2.hpp"

/**
 * \brief Basic Vector3 class that inherit from Vector2. Can be used for 3d positions, etc...
 */
template <typename T>
class Vector3 : public Vector2<T>
{
public:
    static const Vector3 Zero;
    static const Vector3 Up;
    static const Vector3 Down;
    static const Vector3 Left;
    static const Vector3 Right;
    static const Vector3 Forward;
    static const Vector3 Backward;

public:
    T z;

public:
    /**
     * \brief Basic constructor that also call Vector2 constructor
     * \param x X value of the vector
     * \param y Y value of the vector
     * \param z Z value of the vector
     */
    Vector3(T x, T y, T z) :
            Vector2<T>::Vector2(x, y),
            z{z}
    {

    }

    /**
     * \brief Constructor for converting vector2 in vector3
     * \param ref The vector2 to convert
     */
    Vector3(Vector2<T> const &ref) :
            Vector3(ref.x, ref.y, 0)
    {

    }

    /**
     * \brief Copy constructor
     * \param ref The vector to copy
     */
    Vector3(const Vector3<T> &ref = Vector3<T>::Zero) :
            Vector3(ref.x, ref.y, ref.z)
    {

    }

    /**
     * \brief Desctructor
     */
    ~Vector3()
    {

    }

public:
    /**
     * \brief Typical addition operator for vectors, add x and y to param x and y
     * \param toadd The vector to add
     * \return A vector resulting of the addition between 'this' and 'toadd'
     */
    Vector3 operator+(Vector3<T> const &toadd) const
    {
        return Vector3<T>(this->x + toadd.x, this->y + toadd.y, this->z + toadd.z);
    }

    /**
     * \brief Typical substraction operator for vectors, sub x and y to param x and y
     * \param tosub The vector to substract
     * \return A vector resulting of the substraction between 'this' and 'tosub'
     */
    Vector3 operator-(Vector3<T> const &tosub) const
    {
        return Vector3(this->x - tosub.x, this->y - tosub.y, this->z - tosub.z);
    }

    /**
     * \brief Typical multiplication operator for vectors, mult fact to x and y
     * \param fact The factor to multiply
     * \return A vector with x and y multiplied to fact
     */
    Vector3 operator*(T fact) const
    {
        return Vector3(this->x * fact, this->y * fact, this->z * fact);
    }

    Vector3 operator*(Vector3<T> const &fact) const
    {
        Vector3<T>  cpy(*this);
        return cpy *= fact;
    }

    /**
     * \brief Typical division operator for vectors, divide div to x and y
     * \param div The divider
     * \return A vector with x and y divided by div
     */
    Vector3 operator/(T div) const
    {
        return Vector3<T>(this->x / div, this->y / div, this->z / div);
    }

public:
    /**
     * \brief Typical add-equal operator for vectors, same thing than addition but add it directly to 'this'
     * \param toadd The vector to add
     * \return A reference on 'this'
     */
    Vector3 &operator+=(Vector3<T> const &toadd)
    {
        Vector2<T>::operator+=(toadd);
        z += toadd.z;
        return *this;
    }

    /**
     * \brief Typical sub-equal operator for vectors, same thing than substraction but sub it directly to 'this'
     * \param tosub The vector to substract
     * \return A reference on 'this'
     */
    Vector3 &operator-=(Vector3<T> const &tosub)
    {
        Vector2<T>::operator-=(tosub);
        z -= tosub.z;
        return *this;
    }

    /**
     * \brief Typical mult-equal operator for vectors, same thing than multiplication but mult it directly to 'this'
     * \param fact The factor to multiply
     * \return A reference on 'this'
     */
    Vector3 &operator*=(T fact)
    {
        Vector2<T>::operator*=(fact);
        z *= fact;
        return *this;
    }

    Vector3 &operator*=(Vector3<T> const &fact)
    {
        double x, y, z;

        x = this->y * fact.z - this->z * fact.y;
        y = this->z * fact.x - this->x * fact.z;
        z = this->x * fact.y - this->y * fact.x;
        this->x = x;
        this->y = y;
        this->z = z;
        return *this;
    }

    /**
     * \brief Typical div-equal operator for vectors, same thing than division but div it directly to 'this'
     * \param div The divider
     * \return A reference on 'this'
     */
    Vector3 &operator/=(T div)
    {
        Vector2<T>::operator/=(div);
        z /= div;
        return *this;
    }
};

std::ostream    &operator<<(std::ostream &output, Vector3<double> const &ref);

#endif //RAYTRACER_VECTOR3_HPP
