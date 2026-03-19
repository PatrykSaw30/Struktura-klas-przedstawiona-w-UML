#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"

class Triangle : public Shape {
private:
    float h;
    float calcH();

public:
    Triangle(int h_val, std::vector<Line> l);
    Triangle(std::vector<Line> l);

    float getH() const;
    void setH(float h);

    float calcArea() override;
    float calcCircum() override;
};

#endif
