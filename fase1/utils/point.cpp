#include <cmath>
#include <sstream>

#include "point.hpp"


Point::Point(double x, double y, double z) {
    _x = x;
    _y = y;
    _z = z;
}

double Point::x() { return _x; }
double Point::y() { return _y; }
double Point::z() { return _z; }

Point Point::invertX() { return Point(-1 * _x, _y, _z); }

Point Point::invertY() { return Point(_x, -1 * _y, _z); }

Point Point::invertZ() { return Point(_x, _y, -1 * _z); }