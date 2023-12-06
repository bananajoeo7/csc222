#include "Point.h"

double Point::get_x() {
    return x;
}

double Point::get_y() {
    return y;
}

Point Point::operator + (const Point& p) {
    return Point(x + p.x, y + p.y);
}

Point Point::operator - (const Point& p) {
    return Point(x - p.x, y - p.y);
}

string Point::str_point() {
    return "(" + to_string(get_x()) + ", " + to_string(get_y()) + ")";
}

ostream &operator<<(ostream &os, const Point &p) {
  os << "(" << p.x << ", " << p.y << ")";
  return os;
}