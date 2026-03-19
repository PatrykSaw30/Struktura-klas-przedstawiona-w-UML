#ifndef ISOSCELES_TRIANGLE_H
#define ISOSCELES_TRIANGLE_H
#include "triangle.h"

class IsoscelesTriangle final : public Triangle {
private:
    using Triangle::getH;
    using Triangle::setH;

public:
    IsoscelesTriangle(std::vector<Line> l, int h_val);
    IsoscelesTriangle(std::vector<Line> l);
    
    float calcArea() override;
    float calcCircum() override;
};

#endif
