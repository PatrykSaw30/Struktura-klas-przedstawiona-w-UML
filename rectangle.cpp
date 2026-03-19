#include "rectangle.h"
#include <cmath>
#include <array>

Rectangle::Rectangle(std::vector<Line> l) { 
    setLines(l); 
}

float Rectangle::calcArea() {
    std::vector<Line> l = getLines();
    if (l.size() < 2) return 0.0f;
    
    std::array<Point, 2> pts1 = l[0].getPoints();
    float len1 = std::sqrt((pts1[1].getX() - pts1[0].getX()) * (pts1[1].getX() - pts1[0].getX()) + (pts1[1].getY() - pts1[0].getY()) * (pts1[1].getY() - pts1[0].getY()));
                           
    std::array<Point, 2> pts2 = l[1].getPoints();
    float len2 = std::sqrt((pts2[1].getX() - pts2[0].getX()) * (pts2[1].getX() - pts2[0].getX()) + (pts2[1].getY() - pts2[0].getY()) * (pts2[1].getY() - pts2[0].getY()));

    return len1 * len2;
}

float Rectangle::calcCircum() {
    std::vector<Line> l = getLines();
    float sum = 0.0f;
    for (size_t i = 0; i < l.size(); ++i) {
        std::array<Point, 2> pts = l[i].getPoints();
        sum += std::sqrt((pts[1].getX() - pts[0].getX()) * (pts[1].getX() - pts[0].getX()) + (pts[1].getY() - pts[0].getY()) * (pts[1].getY() - pts[0].getY()));
    }
    return sum;
}
