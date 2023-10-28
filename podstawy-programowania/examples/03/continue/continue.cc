#include <iostream>

int
main()
{
  for (int i = 0; i < 10; ++i) {
    if (i == 5)
      continue;
    for (int j = 0; j < 10; ++j) {
      if (i == j)
        continue;
      std::cout << "(" << i << ", " << j << ") ";
    }
    std::cout << '\n';
  }
}
