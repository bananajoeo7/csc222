#include "Point.h"

int Point::get_x() {
    return x;
}

int Point::get_y() {
    return y;
}

Point Point::operator + (const Point& p) {
    return Point(x + p.x, y + p.y);
}

Point Point::operator - (const Point& p) {
    return Point(x - p.x, y - p.y);
}

Point operator * (int scalar, Point &p1) {
    return Point(p1.get_x() * scalar, p1.get_y() * scalar);
}

string Point::to_string() {
    return "(" + std::to_string(get_x()) + ", " + std::to_string(get_y()) + ")";
}

double Point::distance(Point p2) {
    return sqrt((x + p2.x) * (x + p2.x) + (y + p2.y) * (y + p2.y));
}

ostream &operator<<(ostream &os, const Point &p) {
  os << "(" << p.x << ", " << p.y << ")";
  return os;
}