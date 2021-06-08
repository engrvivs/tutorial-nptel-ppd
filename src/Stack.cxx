#include "Stack.hpp"

bool Stack::empty() const { return data_.empty(); }

std::uint8_t Stack::top() const {
  if (true == empty()) {
    throw "Empty stack";
  }
  return data_.back();
}

void Stack::push(std::uint8_t x) { data_.push_back(x); }

void Stack::pop() { data_.pop_back(); }
