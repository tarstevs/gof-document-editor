#pragma once // NOLINT

#include <Glyph.h>

class Character : public Glyph {
 public:
  // constructor
  explicit Character(const char c) : c_(c) {};

  // public methods
  void Draw(Window *w) override {
    w->DrawCharacter(c_);
  }
  Window *GetWindow() {
    return window_;
  }
 private:
  // private variables
  char c_;
};
