#ifndef EQUILATERAL_TRIANGLE_H
#define EQUILATERAL_TRIANGLE_H
#include "triangle.h"

class EquilateralTriangle final : public Triangle {
private:
    using Triangle::getH;
    using Triangle::setH;

public:
    EquilateralTriangle(std::vector<Line> l, int h_val);
    EquilateralTriangle(std::vector<Line> l);
    
    float calcArea() override;
    float calcCircum() override;
};

#endif
