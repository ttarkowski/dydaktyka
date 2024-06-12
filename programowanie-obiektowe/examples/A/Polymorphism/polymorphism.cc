#include <iostream>

class base
{
public:
  virtual int f() { return 0; } // (a)
  virtual ~base() = default;
};

class derived : public base
{
public:
  int f() override { return 42; } // (b)
};

int
main()
{
  base* p = new derived{};
  std::cout
    << p->f(); // Dzięki słowu `virtual` w linijce (a) wywoływana jest metoda
               // `derived::f`. Po skasowaniu `virtual` z (a) należy usunąć też
               // `override` z (b) i wywoływana jest wtedy metoda `base::f`.
  std::cout << std::endl;
  delete p;
}
