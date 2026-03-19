#ifndef POINT_H
#define POINT_H

class Point {
private:
    int x;
    int y;

public:
    Point();
    Point(int x);
    Point(int x, int y);

    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
};

#endif
