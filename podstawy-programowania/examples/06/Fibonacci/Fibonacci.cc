#include <iostream>

int counter = 0;

int
Fibonacci(int n)
{
  counter++;
  return n == 0 ? 0 : n == 1 ? 1 : Fibonacci(n - 1) + Fibonacci(n - 2);
}

int
main()
{
  const int i = 42;
  const int res = Fibonacci(i);
  std::cout << "Fibonacci(" << i << ") = " << res << " (" << counter
            << " wywolan funkcji Fibonacci)\n";
}
