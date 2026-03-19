#include "line.h"

Line::Line(Point p1, Point p2) : points{p1, p2} {}

std::array<Point, 2> Line::getPoints() const { 
    return points; 
}
