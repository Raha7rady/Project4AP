#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "point.h"

class Rectangle {
private:
    Point startPoint;
    int width;
    int height;

public:
    Rectangle(const Point& startPoint, int width, int height);  // Constructor
    Rectangle(const Rectangle& other);  // Copy constructor

    void setStartPoint(const Point& startPoint);  // Setter for starting point
    void setWidth(int width);  // Setter for width
    void setHeight(int height);  // Setter for height

    Point getStartPoint() const;  // Getter for starting point
    int getWidth() const;  // Getter for width
    int getHeight() const;  // Getter for height

};

#endif // RECTANGLE_H

