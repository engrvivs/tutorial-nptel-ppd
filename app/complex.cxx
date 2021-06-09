#include "Complex.hpp"

#include <iostream>

void Display(Complex c) {
  std::cout << "|";
  c.print();
  std::cout << "| = " << c.norm() << std::endl;
}

int main() {
  Complex c1{-4.2, 5.3}, c2 = c1;

  Display(c2);

  return 0;
}
