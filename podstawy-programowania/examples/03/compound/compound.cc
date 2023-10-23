#include <iostream>

int
main()
{
  // Blok #1
  {
    int n = 42;
    std::cout << n << '\n';
  }
  // std::cout << n << '\n'; // Błąd! Zmienna n nie jest tu widoczna.

  const int n = 42;
  const int div = 7;
  int count = 0;
  for (int i = 0; i < n; ++i) { // Blok #2
    std::cout << "Obliczam podzielnosc liczby " << i << " przez " << div
              << ".\n";
    if (i % 7 == 0) { // Blok #3
      ++count;
      std::cout << "Liczba " << i << " jest podzielna przez " << div << ".\n";
    }
  }

  {   // Blok #4
    { // Blok #5
      std::cout << "W podanym zakresie jest " << count
                << " liczb podzielnych przez " << div << ".\n";
    }
  }
}
