#pragma once

#include <concepts>

template <typename T>
concept Numeric = std::signed_integral<T> || std::floating_point<T>;

template <Numeric T> class Point {
private:
  T x_ = 0;
  T y_ = 0;

public:
  Point(T x, T y);
  Point(const Point<T> &p);

  ~Point() = default;

  /**
   * @brief Getter method for Point
   * @return Point position on x axis
   */
  [[nodiscard]] T getX() const { return x_; };

  /**
   * @brief Getter method for Point
   * @return Point position on y axis
   */
  [[nodiscard]] T getY() const { return y_; };

  /**
   * @brief Set Point position on x axis
   */
  void setX(const T x) { x_ = x; };

  /**
   * @brief Set Point position on y axis
   */
  void setY(const T y) { y_ = y; };

  Point<T> &operator=(const Point<T> &p);
};

// Make sure those classes are created
template class Point<double>;
template class Point<int>;
