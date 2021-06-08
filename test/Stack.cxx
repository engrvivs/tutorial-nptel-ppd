#include <catch2/catch.hpp>

#include "Stack.hpp"

TEST_CASE("GIVEN a stack WHEN no data is pushed THEN stack is empty",
          "[Stack][init][empty]") {
  Stack stack;
  REQUIRE(true == stack.empty());
}

TEST_CASE("GIVEN an empty stack WHEN data is poped THEN no exception",
          "[Stack][empty][pop]") {
  Stack stack;
  CHECK(true == stack.empty());
  REQUIRE_NOTHROW(stack.pop());
}

TEST_CASE("GIVEN an empty stack WHEN top is accessed THEN an exception",
          "[Stack][empty][top]") {
  Stack stack;
  CHECK(true == stack.empty());
  REQUIRE_THROWS([&]() { std::uint8_t top = stack.top(); }());
}

TEST_CASE("GIVEN a stack WHEN a data is pushed THEN stack is NOT empty",
          "[Stack][push]") {
  Stack stack;
  stack.push('a');
  REQUIRE(false == stack.empty());
}

TEST_CASE("GIVEN a stack WHEN a data is pushed THEN top matches pushed data",
          "[Stack][push][top]") {
  Stack stack;
  stack.push('a');
  REQUIRE('a' == stack.top());
}

TEST_CASE("GIVEN a stack with one data WHEN data is poped THEN stack is empty",
          "[Stack][pop][empty]") {
  Stack stack;
  stack.push('a');
  stack.pop();
  REQUIRE(true == stack.empty());
}

TEST_CASE("GIVEN a stack WHEN two data are pushed THEN top matches the last "
          "pushed data",
          "[Stack][push][top]") {
  Stack stack;
  stack.push('a');
  stack.push('P');
  REQUIRE('P' == stack.top());
}
