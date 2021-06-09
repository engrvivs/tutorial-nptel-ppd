#include "String.hpp"
#include "Common.hpp"

#include <cstring>

String::String(const char *const p_str)
    : p_str_{strdup(p_str)}, len_{std::strlen(p_str_)} {
  DEBUG_DISPLAY;
}

String::~String() {
  DEBUG_DISPLAY;
  /* strdup uses malloc */
  std::free(p_str_);
}

void String::print() { std::cout << p_str_; }

std::size_t String::length() const { return len_; }
