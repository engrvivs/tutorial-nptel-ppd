#include "Name.hpp"
#include "Common.hpp"

#include <iostream>

Name::Name(const char *p_fn, const char *p_ln)
    : firstName_{p_fn}, lastName_{p_ln} {
  DEBUG_DISPLAY;
}

Name::~Name() { DEBUG_DISPLAY; }

void Name::print() {
  firstName_.print();
  std::cout << " ";
  lastName_.print();
}
