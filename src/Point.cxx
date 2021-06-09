#include "Point.hpp"
#include "Common.hpp"

#include <iostream>

Point::Point(std::int16_t x, std::int16_t y) : x_{x}, y_{y} { DEBUG_DISPLAY; }
Point::Point(const Point &p) : x_{p.x_}, y_{p.y_} { DEBUG_DISPLAY; }
Point::~Point() { DEBUG_DISPLAY; }

void Point::print() { std::cout << "(" << x_ << ", " << y_ << ")"; }
