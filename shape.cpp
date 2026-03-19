#include "shape.h"

std::vector<Line> Shape::getLines() const { return lines; }
void Shape::setLines(std::vector<Line> lines) { this->lines = lines; }
