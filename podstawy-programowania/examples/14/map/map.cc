#include <iostream>
#include <map>
#include <string>

int
main()
{
  std::map<char, unsigned int> counter;
  std::string str{ "Hello, kitty! I love milk too!" };
  for (char c : str) {
    counter[c]++;
  }
  for (auto pair : counter) {
    std::cout << "Znak: " << pair.first << " Liczba wystapien: " << pair.second
              << '\n';
  }
}
