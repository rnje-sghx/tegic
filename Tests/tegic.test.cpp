#include <catch/catch.hpp>
#include <tegic.hpp>

TEST_CASE("Tegic#Says SHOULD respond with a greeting") {
  Tegic tegic;
  REQUIRE("Hello, Tegic!" == tegic.Says());
}
