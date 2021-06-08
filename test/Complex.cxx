#include <catch2/catch.hpp>

#include "Complex.hpp"

TEST_CASE(
    "GIVEN a complex object WHEN no data is entered THEN its norm is zero",
    "[Complex][init][zero]") {
  Complex complex;
  REQUIRE(0.0 == Approx(complex.norm()));
}
