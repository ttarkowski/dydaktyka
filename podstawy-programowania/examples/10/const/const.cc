#include <iostream>

class counter
{
public:
  void increment() { ++n_; }
  void reset() { n_ = 0; }
  int get() const { return n_; }

private:
  int n_;
};

int
main()
{
  counter c{};
  for (int i = 0; i < 3; ++i) {
    c.increment();
    std::cout << c.get() << '\n';
  }
  c.reset();
  std::cout << c.get() << '\n';
}
