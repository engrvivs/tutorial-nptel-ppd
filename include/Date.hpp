#pragma once
#include <cstdint>

class Date {
private:
  enum Month { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };
  enum Day { Mon, Tue, Wed, Thu, Fri, Sat, Sun };
  //
  std::int8_t date_;
  Month month_;
  std::int16_t year_;

public:
  Date(std::int8_t d, std::uint8_t m, std::int16_t y);
  ~Date();
  void print();
  // bool validDate();
  // Day day();
};
