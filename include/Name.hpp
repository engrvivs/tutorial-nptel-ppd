#pragma once
#include "String.hpp"

class Name {
private:
  String firstName_, lastName_;

public:
  Name(const char *p_fn, const char *p_ln);
  ~Name();
  void print();
};
