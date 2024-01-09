#include <iostream>
#include <string>

class hello_kitty
{
public:
  hello_kitty(const std::string& text)
    : my_secret_{ "Hello, kitty! " + text + '\n' }
  {
  }

  friend std::ostream& operator<<(std::ostream& os, const hello_kitty& kitty);

private:
  std::string my_secret_;
};

std::ostream&
operator<<(std::ostream& os, const hello_kitty& kitty)
{
  os << kitty.my_secret_;
  return os;
}

int
main()
{
  hello_kitty kitty{ "I love milk too!" };
  std::cout << kitty; // Wywołanie funkcji operator<<.
}
