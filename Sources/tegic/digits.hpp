#ifndef TEGIC_TEGIC_DIGITS_HPP_
#define TEGIC_TEGIC_DIGITS_HPP_

#include <initializer_list>
#include <vector>

class Digits {
  std::vector<int> numbers;
public:
  Digits();

  Digits(std::initializer_list<int> numbers_);

  virtual ~Digits();

  std::vector<int> get_numbers();
};


#endif // TEGIC_TEGIC_DIGITS_HPP_
