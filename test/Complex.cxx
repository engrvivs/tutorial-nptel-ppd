#include <catch2/catch.hpp>

#include "Complex.hpp"

TEST_CASE(
    "GIVEN a complex object WHEN no data is entered THEN its norm is zero",
    "[Complex][init][zero]") {
  Complex complex;
  REQUIRE(0.0 == Approx(complex.norm()));
}

TEST_CASE("GIVEN a complex object WHEN initialized as {4.2, -5.9} THEN its "
          "norm is 52.45",
          "[Complex][init]") {
  Complex complex = {4.2, -5.9};
  REQUIRE(52.45 == Approx(complex.norm()));
}

TEST_CASE("GIVEN a complex no. -4.2 - j5.9 WHEN it is copied THEN the copied's "
          "norm is 52.45",
          "[Complex][init]") {
  Complex c1{-4.2, -5.9};
  Complex c2 = c1;
  REQUIRE(52.45 == Approx(c2.norm()));
}