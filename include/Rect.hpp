#pragma once
#include "Point.hpp"

class Rect {
private:
  Point TL_, BR_;

public:
  Rect() = default; // default Rect Ctor requires default Point Ctor
  Rect(std::int16_t tl_x, std::int16_t tl_y, std::int16_t br_x,
       std::int16_t br_y);
  Rect(const Point &TL, std::int16_t br_x, std::int16_t br_y);
  Rect(const Point &TL, const Point &BR);
  Rect(const Rect &r);
  ~Rect();
  void print();
};
