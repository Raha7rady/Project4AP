#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(const Point& startPoint, int width, int height)
    : startPoint(startPoint), width(width), height(height) {}

Rectangle::Rectangle(const Rectangle& other)
    : startPoint(other.startPoint), width(other.width), height(other.height) {}

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