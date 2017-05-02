#include <catch/catch.hpp>
#include <tegic.hpp>

TEST_CASE(
    "Tegic#PredictWords => GIVEN an empty digits sequence; IT SHOULD respond with an empty predicted words list"
) {
  Tegic tegic;
  Digits digits;
  auto words = tegic.PredictWords(digits);
  REQUIRE(words.size() == 0);
}

TEST_CASE(
    "Tegic#PredictWords => GIVEN {4,3,5,5,6} as digits sequence; IT SHOULD respond with a known word hello"
) {
  Tegic tegic;
  Digits digits = {4, 3, 5, 5, 6};
  auto words = tegic.PredictWords(digits);
  REQUIRE(words.size() > 0);
  REQUIRE(words.front() == "hello");
}
