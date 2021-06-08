#pragma once
#include <cstdint>
#include <vector>

// template <typename T>
class Stack {
private:
  std::vector<std::uint8_t> data_;

public:
  bool empty() const;
  std::uint8_t top() const;
  void push(std::uint8_t x);
  void pop();
};
