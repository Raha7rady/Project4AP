#pragma once
#ifndef POINT_H
#define POINT_H

class Point {
private:
    int x;
    int y;

public:
    Point(int x, int y);
    Point(const Point& other);

    void setX(int x);
    void setY(int y);
    int getX() const;
    int getY() const;

    Point operator+(const Point& other);
    Point operator-(const Point& other);
    void print();

};

#endif // POINT_H

