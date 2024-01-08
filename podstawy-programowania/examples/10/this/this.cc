#include <iostream>

class counter
{
public:
  counter& increment()
  {
    ++n_;
    return *this;
  }

  counter& reset()
  {
    n_ = 0;
    return *this;
  }

  int get() const { return n_; }

private:
  int n_;
};

int
main()
{
  counter c{};
  for (int i = 0; i < 3; ++i) {
    std::cout << c.increment().get() << '\n';
  }
  std::cout << c.reset().get() << '\n';
}
