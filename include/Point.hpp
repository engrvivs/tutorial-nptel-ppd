#pragma once
#include <cstdint>

class Point {
private:
  std::int16_t x_, y_;

public:
  Point() = default;
  Point(std::int16_t x, std::int16_t y);
  Point(const Point &p);
  ~Point();
  void print();
};
