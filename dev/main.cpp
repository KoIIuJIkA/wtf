#include <vector>

#include "figure.hpp"

int main() {
  std::cout << "Hello World!\n";

  std::vector<Figure *> figure;
  for (size_t i = 0; i < 5; ++i) {
    if (i % 2 == 0)

      figure.emplace_back(new Rectangle(-1));
    else
      figure.emplace_back(new Circle(1));
  }

  for (auto &&i : figure) {
    i->who();
    check(i->print(), "some error mess");
    std::cout << std::endl;
  }

  return 0;
}
