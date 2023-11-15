#include <iostream>
#include <vector>

double
accumulate(std::vector<double> v);

int
main()
{
  std::vector<double> piggy_bank;
  piggy_bank.push_back(10.23); // styczeń
  piggy_bank.push_back(9.35);  // luty
  // ...
  piggy_bank.push_back(25.12); // grudzień

  double total =            // (*) Tutaj jest "wkładana" wartość res
    accumulate(piggy_bank); // z instrukcji return z funkcji accumulate.

  std::cout << "Calkowite oszczednosci w skarbonce: " << total << " zl\n";
}

double
accumulate(std::vector<double> v)
{
  double res = 0.;
  for (std::size_t i = 0; i < v.size(); ++i) {
    res += v.at(i);
  }
  return res; // Instrukcja return wykonuje skok z tego miejsca do linijki (*).
}
