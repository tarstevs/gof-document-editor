#pragma once // NOLINT

#include <iostream>

class Window {
 public:

  // public methods
  static void DrawCharacter(const char c) {
    std::cout << c << std::endl;
  }
};