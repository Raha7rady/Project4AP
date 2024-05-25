#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(const Point& startPoint, int width, int height)
    : startPoint(startPoint), width(width), height(height) {}

Rectangle::Rectangle(const Rectangle& other)
    : startPoint(other.startPoint), width(other.width), height(other.height) {}

//getter , setter
void Rectangle::setStartPoint(const Point& startPoint) {
    this->startPoint = startPoint;
}

void Rectangle::setWidth(int width) {
    this->width = width;
}

void Rectangle::setHeight(int height) {
    this->height = height;
}

Point Rectangle::getStartPoint() const {
    return startPoint;
}

int Rectangle::getWidth() const {
    return width;
}

int Rectangle::getHeight() const {
    return height;
}

//operators += -= /

Rectangle& Rectangle::operator+=(const Rectangle& other) {
    if (startPoint.getX() == other.startPoint.getX() && startPoint.getY() == other.startPoint.getY()) {
        width = (width > other.width) ? width : other.width;
        height = (height > other.height) ? height : other.height;
        return *this;
    }
    else {
        std::cerr << "Error: Rectangles cannot be added as they do not have the same starting point." << std::endl;
        return *this;
    }
}

Rectangle& Rectangle::operator-=(const Rectangle& other) {
    if (startPoint.getX() == other.startPoint.getX() && startPoint.getY() == other.startPoint.getY()) {
        width = (width > other.width) ? width - other.width : 0;
        height = (height > other.height) ? height - other.height : 0;
        return *this;
    }
    else {
        std::cerr << "Error: Rectangles cannot be subtracted as they do not have the same starting point." << std::endl;
        return *this;
    }
}

Rectangle Rectangle::operator/(const Rectangle& other) const {
    int newWidth = width / 2;
    int newHeight = height / 2;
    Point newStartPoint((startPoint.getX() + other.startPoint.getX()) / 2, (startPoint.getY() + other.startPoint.getY()) / 2);
    return Rectangle(newStartPoint, newWidth, newHeight);
}

// Function to check collision
bool Rectangle::collisionDetection(const Rectangle& other) {
    int thisRight = startPoint.getX() + width;
    int thisBottom = startPoint.getY() + height;

    int otherRight = other.startPoint.getX() + other.width;
    int otherBottom = other.startPoint.getY() + other.height;

    if (startPoint.getX() >= otherRight || other.startPoint.getX() >= thisRight) {
        return false;
    }

    if (startPoint.getY() >= otherBottom || other.startPoint.getY() >= thisBottom) {
        return false;
    }

    return true;
}