#include <fstream>
#include <iostream>

int
main()
{
  char c;
  std::ifstream file{ "ifstream.cc" };
  while (file >> std::noskipws >> c) {
    std::cout << c;
  }
}
