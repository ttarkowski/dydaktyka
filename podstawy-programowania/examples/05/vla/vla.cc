#include <cstdlib>
#include <iostream>
#include <random>

int
main()
{
  std::size_t n;
  std::cin >> n;
  int tab[n];

  std::mt19937 engine(std::random_device{}());
  for (std::size_t i = 0; i < n; ++i) {
    std::cout << (tab[i] = std::uniform_int_distribution<int>{ 0, 9 }(engine))
              << '\n';
  }
}
