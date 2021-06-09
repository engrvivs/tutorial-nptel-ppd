#include "Rect.hpp"
#include "Common.hpp"
#include "Point.hpp"

#include <iostream>

Rect::Rect(std::int16_t tl_x, std::int16_t tl_y, std::int16_t br_x,
           std::int16_t br_y)
    : TL_{tl_x, tl_y}, BR_{br_x, br_y} {
  DEBUG_DISPLAY;
}

Rect::Rect(const Point &TL, std::int16_t br_x, std::int16_t br_y)
    : TL_{TL}, BR_{br_x, br_y} {
  DEBUG_DISPLAY;
}

Rect::Rect(const Point &TL, const Point &BR) : TL_{TL}, BR_{BR} {
  DEBUG_DISPLAY;
}

Rect::Rect(const Rect &r) : TL_{r.TL_}, BR_{r.BR_} { DEBUG_DISPLAY; }

Rect::~Rect() { DEBUG_DISPLAY; }

void Rect::print() {
  std::cout << "[";
  TL_.print();
  std::cout << " ";
  BR_.print();
  std::cout << "]";
}
