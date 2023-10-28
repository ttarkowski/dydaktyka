#include <iostream>

int
main()
{
  std::cout << "Podaj liczbe naturalna z zakresu [0, 10]: ";
  int n;
  std::cin >> n;

  switch (n) {
    case 0:
      std::cout << "Zero.";
      break;
    case 1:
      std::cout << "Jeden.";
      break;
    case 2:
    case 3:
    case 5:
    case 7:
      std::cout << "Liczba pierwsza.";
      break;
    case 4:
    case 6:
    case 8:
    case 9:
    case 10:
      std::cout << "Liczba zlozona.";
      break;
    default:
      std::cout << "Liczba poza zakresem.";
  }

  std::cout << '\n';
}
