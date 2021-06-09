#include "CreditCard.hpp"

#include <iostream>

int main() {
  std::cout << "Construction of Objects: ";
  CreditCard cc("5321711934640027", "Sharlock", "Holmes", 221, "Baker Street",
                "London", "NW1 6XE", 7, 2014, 12, 2022, 811);
  std::cout << std::endl;
  std::cout << "\nUsage of Objects:\n";
  cc.print();
  std::cout << std::endl << std::endl;
  std::cout << "\nDestruction of Objects: ";
  return 0;
}
