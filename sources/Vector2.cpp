//
// Created by gaspar on 07/08/2016.
//

#include "Vector2.hpp"

template <>
const Vector2<double> Vector2<double>::Zero = {0, 0};
template <>
const Vector2<double> Vector2<double>::Up = {0, 1};
template <>
const Vector2<double> Vector2<double>::Down = {0, -1};
template <>
const Vector2<double> Vector2<double>::Left = {-1, 0};
template <>
const Vector2<double> Vector2<double>::Right = {1, 0};

template <>
const Vector2<int> Vector2<int>::Zero = {0, 0};
template <>
const Vector2<int> Vector2<int>::Up = {0, 1};
template <>
const Vector2<int> Vector2<int>::Down = {0, -1};
template <>
const Vector2<int> Vector2<int>::Left = {-1, 0};
template <>
const Vector2<int> Vector2<int>::Right = {1, 0};