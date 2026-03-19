#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class Rectangle : public Shape {
public:
    Rectangle(std::vector<Line> l);
    float calcArea() override;
    float calcCircum() override;
};

#endif
