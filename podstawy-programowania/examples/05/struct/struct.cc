#include <cmath>
#include <iostream>

struct point_2d
{
  double x;
  double y;
};

int
main()
{
  point_2d zero(0., 0.);
  point_2d e_x(1., 0.);
  point_2d e_y(0., 1.);
  point_2d p(1., 1.);

  std::cout << "Poczatek ukladu wspolrzednych: (" << zero.x << ", " << zero.y
            << ").\n";
  std::cout << "Wersor e_x: (" << e_x.x << ", " << e_x.y << ").\n";
  std::cout << "Wersor e_y: (" << e_y.x << ", " << e_y.y << ").\n";

  std::cout << "Odleglosc punktu (1, 1) od (0, 0): "
            << std::hypot(p.x - zero.x, p.y - zero.y) << ".\n";
}
