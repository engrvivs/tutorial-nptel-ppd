#pragma once
#include <iostream>

// binary operator<< streams to console == std::cout ostream in std
// namespace \n escaped newline character
// std::endl stream manipulator newline functor
#ifdef DEBUG
#define DEBUG_DISPLAY                                                          \
  do {                                                                         \
    std::cout << "\n" << __PRETTY_FUNCTION__ << ": ";                          \
    print();                                                                   \
    std::cout << std::endl;                                                    \
  } while (0)
#else
#define DEBUG_DISPLAY
#endif // DEBUG
