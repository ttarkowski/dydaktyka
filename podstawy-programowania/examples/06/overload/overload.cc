#include <iostream>
#include <string>
#include <vector>

void
print(int i)
{
  std::cout << "Liczba calkowita: " << i << '\n';
}

void
print(double d)
{
  std::cout << "Liczba zmiennoprzecinkowa: " << d << '\n';
}

void
print(std::vector<std::string> v)
{
  std::cout << "Kontener std::vector zawierający napisy std::string:\n";
  for (std::size_t i = 0; i < v.size(); ++i) {
    std::cout << i + 1 << ". " << v.at(i) << '\n';
  }
  std::cout << "Calkowita liczba napisow: " << v.size() << '\n';
}

int
main()
{
  print(42);
  print(137.035999084);
  std::vector<std::string> v = {
    "\"Answer to the Ultimate Question of Life, The Universe, and Everything\"",
    "odwrotnosc stalej struktury subtelnej"
  };
  print(v);
}
