#include <iostream>
#include <string>

void
replace(std::string& s, char from, char to)
{
  for (std::size_t i = 0; i < s.size(); ++i) {
    if (s.at(i) == from) {
      s.at(i) = to;
    }
  }
}

int
main()
{
  std::string s = "Programowanie w C++";
  std::cout << "Napis oryginalny: " << s << '\n';
  replace(s, ' ', '*');
  std::cout << "Napis zmodyfikowany: " << s << '\n';
}
