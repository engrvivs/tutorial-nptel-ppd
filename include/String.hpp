#pragma once
#include <cstdlib>

class String {
private:
  // order of data members is critical here,
  // as len_ must be initialized using p_str_ attribute
  char *p_str_ = nullptr;
  std::size_t len_ = 0;

public:
  String() = default;
  String(const char *const p_str);
  ~String();
  //
  void print();
  //
  std::size_t length() const;
};
