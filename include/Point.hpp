#pragma once
#include <cstdint>

class Point {
private:
  std::int16_t x_ = 0, y_ = 0;

public:
  Point() = default;
  Point(std::int16_t x, std::int16_t y);
  Point(const Point &p);
  ~Point();
  void print();
};
