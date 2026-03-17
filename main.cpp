#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// ===== POINT =====
class Point {
    int x, y;

public:
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    int getX() { return x; }
    int getY() { return y; }
};

// ===== LINE =====
class Line {
    Point p1, p2;

public:
    Line(Point a, Point b) : p1(a), p2(b) {}

    double length() {
        return sqrt(
            pow(p1.getX() - p2.getX(), 2) +
            pow(p1.getY() - p2.getY(), 2)
        );
    }
};

// ===== SHAPE =====
class Shape {
protected:
    vector<Line> lines;

public:
    Shape(vector<Line> l) {
        lines = l;
    }

    virtual double calcArea() = 0;
    virtual double calcCircum() = 0;
};

// ===== RECTANGLE =====
class Rectangle : public Shape {
public:
    Rectangle(vector<Line> l) : Shape(l) {}

    double calcArea() override {
        double a = lines[0].length();
        double b = lines[1].length();
        return a * b;
    }

    double calcCircum() override {
        double a = lines[0].length();
        double b = lines[1].length();
        return 2 * (a + b);
    }
};

// ===== SQUARE =====
class Square : public Rectangle {
public:
    Square(vector<Line> l) : Rectangle(l) {}

    double calcArea() override {
        double a = lines[0].length();
        return a * a;
    }

    double calcCircum() override {
        double a = lines[0].length();
        return 4 * a;
    }
};

// ===== MAIN =====
int main() {
    Point a(0,0), b(4,0), c(4,3), d(0,3);

    Line l1(a,b);
    Line l2(b,c);
    Line l3(c,d);
    Line l4(d,a);

    vector<Line> lines = {l1, l2, l3, l4};

    Rectangle r(lines);
    cout << "Prostokat pole: " << r.calcArea() << endl;
    cout << "Prostokat obwod: " << r.calcCircum() << endl;

    Square s({l1, l2});
    cout << "Kwadrat pole: " << s.calcArea() << endl;
    cout << "Kwadrat obwod: " << s.calcCircum() << endl;

    return 0;
}
