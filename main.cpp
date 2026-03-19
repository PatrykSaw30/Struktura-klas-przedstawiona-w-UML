#include <iostream>
#include <vector>
#include "point.h"
#include "line.h"
#include "shape.h"
#include "square.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"

using namespace std;

int main() {
    Line side1(Point(0, 0), Point(4, 0));
    Line side2(Point(4, 0), Point(4, 4));
    Line side3(Point(4, 4), Point(0, 4));
    Line side4(Point(0, 4), Point(0, 0));

    vector<Line> squareLines = {side1, side2, side3, side4};
    vector<Line> triangleLines = {side1, side1, side1};

    vector<Shape*> shapes;

    shapes.push_back(new Square(squareLines));
    shapes.push_back(new IsoscelesTriangle(triangleLines, 3));
    shapes.push_back(new EquilateralTriangle(triangleLines));

    for (size_t i = 0; i < shapes.size(); ++i) {
        cout << "Figura nr " << i + 1 << ":" << endl;
        cout << "  Pole: " << shapes[i]->calcArea() << endl;
        cout << "  Obwod: " << shapes[i]->calcCircum() << endl;
    }

    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}
