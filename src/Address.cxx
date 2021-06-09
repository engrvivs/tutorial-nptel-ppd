#include "Address.hpp"
#include "Common.hpp"

#include <iostream>
using std::cout;

Address::Address(std::uint32_t hn, const char *const p_sn,
                 const char *const p_cn, const char *const p_pin)
    : houseNo_{hn}, street_{p_sn}, city_{p_cn}, pin_{p_pin} {
  DEBUG_DISPLAY;
}

Address::~Address() { DEBUG_DISPLAY; }

void Address::print() {
  cout << houseNo_ << ", ";
  street_.print();
  cout << ", ";
  city_.print();
  cout << " - ";
  pin_.print();
}
