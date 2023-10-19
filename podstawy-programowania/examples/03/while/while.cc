#include <iostream>

int
main()
{
  std::cout << "Sposob nr 1:\n";
  int n = 10;
  while (n > 0) {
    std::cout << n << "^2 = " << n * n << '\n';
    --n;
  }

  std::cout << '\n';
  
  std::cout << "Sposob nr 2:\n";
  int i = 10;
  while (int j = i * i) {
    std::cout << i-- << "^2 = " << j << '\n';
  }
}
