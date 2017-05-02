#include <catch/catch.hpp>
#include <tegic.hpp>

TEST_CASE("Tegic#PredictWords => GIVEN an empty digits set; IT SHOULD respond with an empty predicted words list") {
  Tegic tegic;
  Digits digits;
  auto words = tegic.PredictWords(digits);
  REQUIRE(words.size() == 0);
}
