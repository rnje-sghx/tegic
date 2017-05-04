#include "tegic.hpp"

Tegic::Tegic() {
  // NOOP
}

Tegic::~Tegic() {
  // NOOP
}

std::vector<std::string> Tegic::PredictWords(Digits digits) {
  std::vector<std::string> words;
  if (!digits.get_numbers().empty()) {
    words.push_back("hello");
  }
  return words;
}
