#include "Point.h"
#include <iostream>

Point::Point(int x, int y) : x(x), y(y) {}

Point::Point(const Point& other) : x(other.x), y(other.y) {}

void Point::setX(int x) {
    this->x = x;
}

void Point::setY(int y) {
    this->y = y;
}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

Point Point::operator+(const Point& other) {
    return Point(this->x + other.x, this->y + other.y);
}

Point Point::operator-(const Point& other) {
    return Point(this->x - other.x, this->y - other.y);
}

void Point::print() {
    std::cout << "Point: (" << x << ", " << y << ")" << std::endl;
}


Point& Point::operator/=(int divisor) {
    if (divisor == 0) {
        std::cerr << "Error: Division by zero\n";
        return *this;
    }

    x /= divisor;
    y /= divisor;

    return *this;
}

Point& Point::operator=(const Point& other) {
    if (this != &other) {
        x = other.x;
        y = other.y;
    }
    return *this;
}

bool Point::operator>=(const Point& other) const {
    return (x * x + y * y) >= (other.x * other.x + other.y * other.y);
}