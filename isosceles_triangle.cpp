#include "isosceles_triangle.h"

IsoscelesTriangle::IsoscelesTriangle(std::vector<Line> l, int h_val) : Triangle(h_val, l) {}
IsoscelesTriangle::IsoscelesTriangle(std::vector<Line> l) : Triangle(l) {}

float IsoscelesTriangle::calcArea() { return Triangle::calcArea(); }
float IsoscelesTriangle::calcCircum() { return Triangle::calcCircum(); }
