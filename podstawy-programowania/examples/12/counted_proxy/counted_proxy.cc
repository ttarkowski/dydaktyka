#include <cassert>
#include <cstddef>
#include <string>

template<typename T>
class counted_proxy
{
public:
  counted_proxy(const T& t)
    : t_{ t }
    , counter_{ 0 }
  {
  }

  T get() const
  {
    ++counter_;
    return t_;
  }

  counted_proxy& set(const T& t)
  {
    counter_ = 0;
    t_ = t;
    return *this;
  }

  std::size_t get_counter() const { return counter_; }

private:
  T t_;
  mutable std::size_t counter_;
};

int
main()
{
  counted_proxy<std::string> cp{ "Piggy Bank" };
  assert(cp.get_counter() == 0);
  cp.get();
  assert(cp.get_counter() == 1);
  cp.set("Hello, kitty!");
  assert(cp.get_counter() == 0);
}
