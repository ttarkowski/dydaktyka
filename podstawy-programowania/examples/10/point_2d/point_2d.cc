#include <cmath>
#include <iostream>

class point_2d
{
public:
  point_2d(double x, double y)
    : x_(x)
    , y_(y)
  {
  }

  double get_x() const { return x_; }
  double get_y() const { return y_; }

  double distance_from_zero() const { return std::hypot(x_, y_); }

private:
  double x_;
  double y_;
};

int
main()
{
  point_2d zero(0., 0.);
  point_2d e_x(1., 0.);
  point_2d e_y(0., 1.);
  point_2d p(1., 1.);

  std::cout << "Poczatek ukladu wspolrzednych: (" << zero.get_x() << ", "
            << zero.get_y() << ").\n";
  std::cout << "Wersor e_x: (" << e_x.get_x() << ", " << e_x.get_y() << ").\n";
  std::cout << "Wersor e_y: (" << e_y.get_x() << ", " << e_y.get_y() << ").\n";

  std::cout << "Odleglosc punktu (1, 1) od (0, 0): " << p.distance_from_zero()
            << ".\n";
}
