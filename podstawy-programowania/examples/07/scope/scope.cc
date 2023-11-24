#include <iostream>

void
f()
{
  int a = 42;
  std::cout << "Zmienna a (f) ma wartosc " << a << ". "
            << "Znajduje sie pod adresem " << &a << ".\n";
}

int
main()
{
  int a = 7;
  std::cout << "Zmienna a (main) ma wartosc " << a << ". "
            << "Znajduje sie pod adresem " << &a << ".\n";
  f();
  std::cout << "Zmienna a (main) ma wartosc " << a << ". "
            << "Znajduje sie pod adresem " << &a << ".\n";
}
