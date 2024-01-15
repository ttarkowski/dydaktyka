#include <algorithm>
#include <cstddef>
#include <iostream>
#include <iterator>

template<typename T>
void
sort(T* a, std::size_t n)
{
  do {
    std::size_t new_n = 0;
    for (std::size_t i = 1; i < n; ++i) {
      if (a[i - 1] > a[i]) {
        std::swap(a[i - 1], a[i]);
        new_n = i;
      }
    }
    n = new_n;
  } while (n > 0);
}

template<typename T>
void
print_array(std::ostream& os, T* a, std::size_t n)
{
  for (std::size_t i = 0; i < n; ++i) {
    os << a[i] << ' ';
  }
  os << '\n';
}

int
main()
{
  int tab0[] = { 0, 7, 3, 42, 12, 100, 50 };
  print_array(std::cout, tab0, std::size(tab0));
  sort(tab0, std::size(tab0));
  print_array(std::cout, tab0, std::size(tab0));

  std::string tab1[] = { "fonon",  "plazmon",  "ekscyton", "polaryton",
                         "dziura", "elektron", "foton" };
  print_array(std::cout, tab1, std::size(tab1));
  sort(tab1, std::size(tab1));
  print_array(std::cout, tab1, std::size(tab1));
}
