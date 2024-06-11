#include <iostream>

class rectangle
{
public:
  // Konstruktor
  rectangle(double a, double b)
    : a{ a }
    , b_{ b }
  {
  }

  // Metody składowe
  double area() { return a * b_; }
  double get_a() { return a; }
  double get_b() { return b_; }

private:
  // Zmienne składowe
  double a;
  double b_; // Inna konwencja…
};

int
main()
{
  rectangle r(4.2, 1.0);
  std::cout << "Wymiary: " << r.get_a() << " x " << r.get_b() << '\n'
            << "Powierzchnia: " << r.area() << '\n';
}
