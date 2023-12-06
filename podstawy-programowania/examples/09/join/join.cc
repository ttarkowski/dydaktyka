#include <iostream>
#include <string>

std::string
join(const std::string& s1, const std::string& s2)
{
  return s1 + s2;
}

int
main()
{
  std::string s = "Programowanie ";
  std::cout << join(s, "jest proste!\n");
}
