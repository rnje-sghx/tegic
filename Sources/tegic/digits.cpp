#include "digits.hpp"

Digits::Digits() : numbers() {
  // NOOP
}

Digits::Digits(std::initializer_list<int> numbers_) : numbers(numbers_) {
  // NOOP
}

Digits::~Digits() {
  // NOOP
}

std::vector<int> Digits::get_numbers() {
  return this->numbers;
}
