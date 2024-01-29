#include <algorithm>
#include <cassert>
#include <iostream>
#include <random>
#include <vector>

std::mt19937 engine{ std::random_device{}() };

template<typename C>
void
print_container(std::ostream& os, const std::string& str, const C& c)
{
  os << str << ": ";
  std::for_each(c.begin(), c.end(), [](auto x) { std::cout << x << ' '; });
  os << '\n';
}

int
main()
{
  const std::size_t sz = 10;
  std::vector<int> v(sz);
  assert(v.size() == sz);
  print_container(std::cout, "Poczatkowa zawartosc kontenera", v);

  std::generate(v.begin(), v.end(), []() {
    return std::uniform_int_distribution<int>{ 0, 9 }(engine);
  });
  print_container(std::cout, "Kontener po losowaniu zawartosci", v);

  if (std::any_of(v.begin(), v.end(), [](auto x) { return x % 2 == 0; })) {
    std::cout << "W kontenerze jest co najmniej jeden element parzysty.\n";
  } else {
    std::cout << "W kontenerze nie ma elementow parzystych.\n";
  }

  std::cout << "Liczba elementow podzielnych przez 3: "
            << std::count_if(
                 v.begin(), v.end(), [](auto x) { return x % 3 == 0; })
            << '\n';

  std::cout << "Minimum: " << *std::min_element(v.begin(), v.end()) << '\n';
  std::cout << "Maksimum: " << *std::max_element(v.begin(), v.end()) << '\n';

  std::reverse(v.begin(), v.end());
  print_container(std::cout, "Kontener po odwroceniu zawartosci", v);

  std::partition(v.begin(), v.end(), [](auto x) { return x % 2 == 0; });
  print_container(std::cout, "Kontener po partycjonowaniu (parzystosc)", v);

  std::sort(v.begin(), v.end());
  print_container(std::cout, "Kontener po sortowaniu", v);

  std::shuffle(v.begin(), v.end(), engine);
  print_container(std::cout, "Kontener po losowej zmianie kolejnosci", v);
}
