#include "equilateral_triangle.h"

EquilateralTriangle::EquilateralTriangle(std::vector<Line> l, int h_val) : Triangle(h_val, l) {}
EquilateralTriangle::EquilateralTriangle(std::vector<Line> l) : Triangle(l) {}

float EquilateralTriangle::calcArea() { return Triangle::calcArea(); }
float EquilateralTriangle::calcCircum() { return Triangle::calcCircum(); }
