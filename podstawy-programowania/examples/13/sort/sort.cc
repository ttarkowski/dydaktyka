#include <algorithm>
#include <cstddef>
#include <iostream>
#include <iterator>

template<typename T, typename Comp>
void
sort(T* a, std::size_t n, Comp comp)
{
  do {
    std::size_t new_n = 0;
    for (std::size_t i = 1; i < n; ++i) {
      if (comp(a[i - 1], a[i])) {
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
  int tab[] = { 0, 7, 3, 42, 12, 100, 50 };
  print_array(std::cout, tab, std::size(tab));
  sort(tab, std::size(tab), [](int a, int b) { return a > b; });
  print_array(std::cout, tab, std::size(tab));
  sort(tab, std::size(tab), [](int a, int b) { return a < b; });
  print_array(std::cout, tab, std::size(tab));
}
