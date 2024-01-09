#include <fstream>
#include <iostream>
#include <string>

std::streamsize
file_size(const std::string& filename)
{
  // Uwaga: Lepiej jest korzystać ze strumienia wejściowego std::ifstream
  // aniżeli ze strumienia wyjściowego std::ofstream do pomiaru rozmiaru pliku.
  // Czy wiesz dlaczego?
  std::ifstream file{ filename };
  file.seekg(0, std::ios::end); // Ustawienie wskaźnika wejściowego.
  return file.tellg();          // Pobranie pozycji wskaźnika wejściowego.
}

int
main()
{
  std::cout << "Rozmiar pliku: " << file_size("size.cc") << '\n';
}
