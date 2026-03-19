#ifndef SQUARE_H
#define SQUARE_H
#include "rectangle.h"

class Square final : public Rectangle {
public:
    Square(std::vector<Line> l);
    float calcArea() override;
    float calcCircum() override;
};

#endif
