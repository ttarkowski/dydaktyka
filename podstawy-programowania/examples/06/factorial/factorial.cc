#include <iostream>

using ulli_t = unsigned long long int;

ulli_t
factorial(ulli_t n);

int
main()
{
  // factorial(21) daje nieprawidłowy wynik dla typu ulli_t.
  for (int i = 0; i < 21; ++i) {
    std::cout << i << "! = " << factorial(i) << '\n';
  }
}

ulli_t
factorial(ulli_t n)
{
  return n == 0 ? 1 : n * factorial(n - 1);
}
