#pragma once

#include <array>
#include <memory>

#include "Point.hxx"

/**
 * @brief Class representing 2D axis
 */
template <Numeric T> class Axis {
public:
  Axis(const Point<T> originPoint, const std::shared_ptr<Axis<T>> parentAxis)
      : originPoint_(originPoint), parentAxis_(parentAxis){};

  Axis(const Axis<T> &axis)
      : originPoint_(axis.getOriginPoint()), parentAxis_(axis.getParent()){};

  [[nodiscard]] Point<T> getOriginPoint() const { return originPoint_; };
  void setOriginPoint(const Point<T> &originPoint) {
    originPoint_ = originPoint;
  };

  [[nodiscard]] std::shared_ptr<Axis<T>> getParentAxis() const {
    return parentAxis_;
  };

  /**
   * @brief Set angle of rotation
   * @param angle Rotation angle in degrees
   */
  void setRotation(const T &angle);
  [[nodiscard]] T getRotationAngle() const { return rotationAngle_; };
  [[nodiscard]] std::array<long double, 4> getRotationMatrix() const { return rotationMatrix_; };

private:
  /**
   * @brief Axis placement in parent (or relative to (0, 0) in top axis case)
   */
  Point<T> originPoint_;

  /**
   * @brief Angle of rotation of the axis (system is left turning i. e. positive
   * number means rotation clockwise)
   */
  T rotationAngle_ = 0;

  /**
   * @brief Representation of 2x2 matrix of rotation indexes are in this order:
   * [0 1; 2 3] where ';' means new row
   */
  std::array<long double, 4> rotationMatrix_ = {1, 0, 0, 1};

  /**
   * @brief Pointer to this axis parent, setting it to nullptr indicates it's
   * the top most axis in the system
   */
  const std::shared_ptr<Axis<T>> parentAxis_;
};
