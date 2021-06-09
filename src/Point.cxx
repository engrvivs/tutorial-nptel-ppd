#include "Point.hpp"
#include "Common.hpp"

Point::Point(std::int16_t x, int16_t y) : x_{x}, y_{y} { DEBUG_DISPLAY; }
Point::~Point() { DEBUG_DISPLAY; }

void Point::print() { std::cout << "(" << x_ << ", " << y_ << ")"; }
