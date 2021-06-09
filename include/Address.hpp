#pragma once
#include "String.hpp"

#include <cstdint>

class Address {
private:
  std::uint32_t houseNo_;
  String street_, city_, pin_;

public:
  Address(std::uint32_t hn, const char *const p_sn, const char *const p_cn,
          const char *const p_pin);
  ~Address();
  void print();
};
