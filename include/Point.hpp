#pragma once
#include <cstdint>

class Point {
private:
  std::int16_t x_, y_;

public:
  Point(std::int16_t x, int16_t y);
  ~Point();
  void print();
};
