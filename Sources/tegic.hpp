#ifndef TEGIC_TEGIC_HPP_
#define TEGIC_TEGIC_HPP_

#include <string>
#include <vector>
#include "tegic/digits.hpp"

class Tegic {
public:
  Tegic();

  virtual ~Tegic();

  std::vector<std::string> PredictWords(Digits digits);
};

#endif // TEGIC_TEGIC_HPP_
