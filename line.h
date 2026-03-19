#ifndef LINE_H
#define LINE_H
#include <array>
#include "point.h"

class Line {
private:
    std::array<Point, 2> points;

public:
    Line(Point p1, Point p2);
    std::array<Point, 2> getPoints() const; // UML: + getPoints(): Point[2]
};

#endif
