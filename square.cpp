#include "square.h"
#include <cmath>
#include <array>

Square::Square(std::vector<Line> l) : Rectangle(l) {}

float Square::calcArea() {
    std::vector<Line> l = getLines();
    if (l.empty()) return 0.0f;
    
    std::array<Point, 2> pts = l[0].getPoints();
    float a = std::sqrt((pts[1].getX() - pts[0].getX()) * (pts[1].getX() - pts[0].getX()) + (pts[1].getY() - pts[0].getY()) * (pts[1].getY() - pts[0].getY()));
    return a * a;
}

float Square::calcCircum() {
    std::vector<Line> l = getLines();
    if (l.empty()) return 0.0f;
    
    std::array<Point, 2> pts = l[0].getPoints();
    float a = std::sqrt((pts[1].getX() - pts[0].getX()) * (pts[1].getX() - pts[0].getX()) + (pts[1].getY() - pts[0].getY()) * (pts[1].getY() - pts[0].getY()));
    return 4.0f * a;
}
