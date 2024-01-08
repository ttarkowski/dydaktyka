#include <iostream>

class verbose
{
public:
  verbose() { std::cout << "Konstruktor\n"; }
  ~verbose() { std::cout << "Destruktor\n"; }
  void get() const { std::cout << "Metoda skladowa\n"; }
};

int
main()
{
  for (int i = 0; i < 3; ++i) {
    verbose v{};
    v.get();
  }
}
