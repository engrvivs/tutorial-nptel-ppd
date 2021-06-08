#include "Stack.hpp"

#include <iostream>
using std::cout;

int main() {
  Stack stack;

  char str[] = "ABCDE";
  for (int ij = 0; ij < 5; ++ij) {
    stack.push(str[ij]);
  }

  while (!stack.empty()) {
    cout << stack.top();
    stack.pop();
  }
  cout << std::endl;

  return 0;
}
