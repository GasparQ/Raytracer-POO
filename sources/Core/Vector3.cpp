//
// Created by gaspar on 07/08/2016.
//

#include "Core/Vector3.hpp"

template <>
const Vector3<double> Vector3<double>::Zero = {0, 0, 0};
template <>
const Vector3<double> Vector3<double>::Up = {0, 0, 1};
template <>
const Vector3<double> Vector3<double>::Down = {0, 0, -1};
template <>
const Vector3<double> Vector3<double>::Left = {0, -1, 0};
template <>
const Vector3<double> Vector3<double>::Right = {0, 1, 0};
template <>
const Vector3<double> Vector3<double>::Forward = {1, 0, 0};
template <>
const Vector3<double> Vector3<double>::Backward = {-1, 0, 0};

template <>
const Vector3<int> Vector3<int>::Zero = {0, 0, 0};
template <>
const Vector3<int> Vector3<int>::Up = {0, 0, 1};
template <>
const Vector3<int> Vector3<int>::Down = {0, 0, -1};
template <>
const Vector3<int> Vector3<int>::Left = {0, -1, 0};
template <>
const Vector3<int> Vector3<int>::Right = {0, 1, 0};
template <>
const Vector3<int> Vector3<int>::Forward = {1, 0, 0};
template <>
const Vector3<int> Vector3<int>::Backward = {-1, 0, 0};

std::ostream    &operator<<(std::ostream &output, Vector3<double> const &ref)
{
    output << "{" << ref.x << ", " << ref.y << ", " << ref.z << "}";
    return (output);
}