#include "Date.hpp"
#include "Common.hpp"

// static (global) variables
char monthNames[][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
char dayNames[][10] = {"Monday", "Tuesday",  "Wednesday", "Thursday",
                       "Friday", "Saturday", "Sunday"};

Date::Date(std::int8_t d, std::uint8_t m, std::int16_t y)
    : date_{d}, month_{(Month)m}, year_{y} {
  DEBUG_DISPLAY;
}

Date::~Date() { DEBUG_DISPLAY; }

void Date::print() {
  std::cout << static_cast<int>(date_) << "/" << monthNames[month_ - 1] << "/"
            << year_;
}
