#include <iostream>
#include <random>
#include <set>

std::mt19937 engine{ std::random_device{}() };

int
random(int a, int b)
{
  return std::uniform_int_distribution<int>{ a, b }(engine);
}

int
main()
{
  std::set<int> numbers;

  for (int i = 0; i < 10; ++i) {
    const int draw = random(0, 100);
    std::cout << "Wylosowano liczbe " << draw << ".\n";
    numbers.insert(draw);
  }

  std::cout << "Zawartosc kontenera set: ";
  for (auto x : numbers) {
    std::cout << x << ' ';
  }
  std::cout << std::endl;
}
