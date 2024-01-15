#include <cassert>
#include <cstddef>

template<typename T, std::size_t N>
class array
{
public:
  T& operator[](std::size_t i)
  {
    check_bounds(i);
    return a_[i];
  }

  const T& operator[](std::size_t i) const
  {
    check_bounds(i);
    return a_[i];
  }

  std::size_t size() const { return N; }

private:
  void check_bounds(std::size_t i) const { assert(i < N); }

private:
  T a_[N] = {}; // Kompilator wygeneruje konstruktor za nas i zainicjuje tablicę
                // domyślną wartością dla T…
};

class test
{
public:
  test()
    : x_{ 42 } // … która w tym przypadku jest równa 42.
  {
  }

  int get() const { return x_; }
  void set(int x) { x_ = x; }

private:
  int x_;
};

int
main()
{
  array<test, 7> a{};
  assert(a.size() == 7);
  assert(a[3].get() == 42);
  a[3].set(100);
  assert(a[3].get() == 100);
}
