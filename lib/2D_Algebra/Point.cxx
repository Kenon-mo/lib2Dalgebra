#include "Point.hxx"

template <Numeric T>
Point<T>::Point(T x, T y) :
    x_{x},
    y_{y}
{
}

template <Numeric T>
Point<T>::Point(const Point<T>& p) :
    x_{p.getX()},
    y_{p.getY()}
{
}

template <Numeric T>
Point<T>& Point<T>::operator=(const Point<T>& p)
{
    // Guard self assignment
    if (this == &p)
    {
        return *this;
    }

    x_ = p.getX();
    y_ = p.getY();
    return *this;
}