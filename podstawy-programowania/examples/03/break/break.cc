#include <iostream>

int
main()
{
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; ; ++j) {
      std::cout << "* ";
      if (j == i) {
        break; // Zakończenie wewnętrznej pętli.
      }
    }
    std::cout << '\n';
  }
}
