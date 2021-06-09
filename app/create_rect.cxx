#include "Rect.hpp"

#include <iostream>
using std::cout;

int main() {
  cout << "Rect 1:";
  Rect r1{0, 2, 5, 7};
  // r1.print();
  cout << "\nRect 2:";
  Rect r2{Point{3, 5}, Point{6, -9}};
  cout << "\nRect 3:";
  Rect r3{Point{2, 2}, 6, 4};
  cout << "\nRect 4:";
  Rect r4;
  cout << "\nSTART Desctructors:\n";
  return 0;
}
