#include <Character.h>

int main() {
  Character *c1 = new Character{'a'};
  c1->Draw(c1->GetWindow());
  return 0;
}