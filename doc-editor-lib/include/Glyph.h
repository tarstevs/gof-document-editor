#pragma once // NOLINT

#include <Window.h>

class Glyph {
 public:
  // destructor
  Glyph() : window_(new Window) {};
  virtual ~Glyph() { delete window_; };

  // public methods
  /* appearance */
  virtual void Draw(Window *) = 0;
//  virtual void Bounds(Rect &) = 0;
  /* hit detection */
//  virtual bool Intersects(const Point &) = 0;
  /* structure */
//  virtual void Insert(Glyph *, int) = 0;
//  virtual void Remove(Glyph *) = 0;
//  virtual Glyph *Child(int) = 0;
//  virtual Glyph *Parent() = 0;

 protected:
  // protected variables
  Window *window_; // NOLINT
};
