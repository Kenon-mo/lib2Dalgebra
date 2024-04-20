#include <iostream>

#include <Point.hxx>

int testAssignment() {
    Point a(1.0, 1.0);
    Point b(2.0, 2.0);

    a = b;
    if (a.getX() != b.getX() || a.getY() != b.getY())
    {
        return 1;
    }

    return 0;
}

int testCopyConstructor() {
    Point a(1, 2);
    Point b(a);

    if (a.getX() != b.getX() || a.getY() != b.getY())
    {
        return 1;
    }

    return 0;
}

int main(void) {
    int ret = 0;

    ret = testAssignment();

    return ret;
}