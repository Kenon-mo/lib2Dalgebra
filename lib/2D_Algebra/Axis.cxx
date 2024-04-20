#include <cmath>
#include <numbers>

#include "Axis.hxx"
#include "Point.hxx"

template <Numeric T> inline long double deg2rad(const T &deg) {
  return deg * (std::numbers::pi / 180);
}

template <Numeric T> void Axis<T>::setRotation(const T &angle) {
  rotationAngle_ = angle;
  rotationMatrix_ = {std::cos(deg2rad(angle)), -std::sin(deg2rad(angle)),
                     std::sin(deg2rad(angle)), std::cos(deg2rad(angle))};
}

