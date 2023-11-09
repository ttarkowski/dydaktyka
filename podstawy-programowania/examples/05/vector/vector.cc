#include <cstdlib>
#include <iostream>
#include <random>
#include <vector>

int
main()
{
  std::vector<int> v;
  std::mt19937 engine(std::random_device{}());

  std::size_t n;
  std::cin >> n;

  for (std::size_t i = 0; i < n; ++i) {
    v.push_back(std::uniform_int_distribution<int>{ 0, 9 }(engine));
    std::cout << v.back() << '\n';
  }
}
