#include "triangle.h"
#include <cmath>
#include <array>

float Triangle::calcH() {
    std::vector<Line> l = getLines();
    if (l.empty()) return 0.0f;
    
    std::array<Point, 2> pts = l[0].getPoints();
    float base = std::sqrt((pts[1].getX() - pts[0].getX()) * (pts[1].getX() - pts[0].getX()) + (pts[1].getY() - pts[0].getY()) * (pts[1].getY() - pts[0].getY()));
    return base * std::sqrt(3.0f) / 2.0f;
}

Triangle::Triangle(int h_val, std::vector<Line> l) : h(static_cast<float>(h_val)) { 
    setLines(l); 
}

Triangle::Triangle(std::vector<Line> l) { 
    setLines(l); 
    h = calcH(); 
}

float Triangle::getH() const { return h; }
void Triangle::setH(float h_val) { this->h = h_val; }

float Triangle::calcArea() {
    std::vector<Line> l = getLines();
    if (l.empty()) return 0.0f;
    
    std::array<Point, 2> pts = l[0].getPoints();
    float base = std::sqrt((pts[1].getX() - pts[0].getX()) * (pts[1].getX() - pts[0].getX()) + (pts[1].getY() - pts[0].getY()) * (pts[1].getY() - pts[0].getY()));
    return 0.5f * base * h;
}

float Triangle::calcCircum() {
    std::vector<Line> l = getLines();
    float sum = 0.0f;
    for (size_t i = 0; i < l.size(); ++i) {
        std::array<Point, 2> pts = l[i].getPoints();
        sum += std::sqrt((pts[1].getX() - pts[0].getX()) * (pts[1].getX() - pts[0].getX()) + (pts[1].getY() - pts[0].getY()) * (pts[1].getY() - pts[0].getY()));
    }
    return sum;
}
