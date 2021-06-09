#include <catch2/catch.hpp>

#include "String.hpp"

TEST_CASE(
    "GIVEN a string object WHEN its length is accessed THEN it should be 0",
    "[String][init][len]") {
  String string;
  REQUIRE(0 == string.length());
}

TEST_CASE(
    "GIVEN a string Partha WHEN its length is accessed THEN it should be 6",
    "[String][len]") {
  String string("Partha");
  REQUIRE(6 == string.length());
}
