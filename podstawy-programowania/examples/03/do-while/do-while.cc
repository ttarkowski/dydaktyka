#include <iostream>

int
main()
{
  char c = 'a';
  do {
    std::cout << c << ": " << static_cast<int>(c) << '\n';
  } while (c++ != 'z');
}
