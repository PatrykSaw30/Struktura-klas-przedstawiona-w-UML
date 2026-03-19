#ifndef SHAPE_H
#define SHAPE_H
#include <vector>
#include "line.h"

class Shape {
private:
    std::vector<Line> lines;

public:
    virtual ~Shape() = default;

    std::vector<Line> getLines() const;
    void setLines(std::vector<Line> lines);

    virtual float calcArea() = 0;
    virtual float calcCircum() = 0;
};

#endif
