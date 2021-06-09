#pragma once
#include "Point.hpp"

class Rect {
private:
  Point TL_, BR_;

public:
  Rect(std::int16_t tl_x, std::int16_t tl_y, std::int16_t br_x,
       std::int16_t br_y);
  ~Rect();
  void print();
};
