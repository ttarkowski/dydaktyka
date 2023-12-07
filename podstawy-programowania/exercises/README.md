# Zbiór zadań

## Referencje

### Zadanie 1

Uzupełnij poniższy kod źródłowy:
```cpp
#include <iostream>

// Tutaj powinna znaleźć się definicja funkcji swap.

int
main()
{
  int a = 0;
  int b = 1;
  std::cout << a << ' ' << b << '\n'; // Wypisze wartości 0 i 1.
  swap(a, b);
  std::cout << a << ' ' << b << '\n'; // Wypisze wartości 1 i 0.
}
```
Uzupełniony program powinien wypisywać następujący komunikat:
> 0 1  
> 1 0

### Zadanie 2

Uzupełnij poniższy kod źródłowy:
```cpp
#include <iostream>

// Tutaj powinna znaleźć się definicja funkcji f.

int
main()
{
  int n = 0;
  f(n) = 42;
  std::cout << n << '\n'; // Wypisze wartość: 42.
}
```
Uzupełniony program powinien wypisywać następujący komunikat:
> 42

### Zadanie 3

W języku C++ referencje służą między innymi do tego, aby podczas
przekazywania do funkcji dużych obiektów, nie trzeba było ich kopiować.
Uzupełnij poniższy kod źródłowy o funkcję, która nazywa się `operator+`. Funkcja
ta przyjmuje dwie struktury typu `vector2d` i dodaje je zgodnie z matematyczną
definicją dodawania wektorów.
```cpp
#include <iostream>

struct vector2d
{
  double x;
  double y;
};

// Tutaj powinna znaleźć się definicja funkcji operator+.

int
main()
{
  vector2d v0 = { 1., 2. };
  vector2d v1 = { 2., 2. };
  vector2d res = v0 + v1;
  std::cout << res.x << ' ' << res.y << '\n';       // Wypisze wartości 3 i 4.
  std::cout << (vector2d{ 0., 0. } + v0).x << '\n'; // Wypisze wartość 1.
}
```
Uzupełniony program powinien wypisywać następujący komunikat:
>3 4  
>1

Uwagi:
  1. Zauważ, że funkcja `operator+` jest wywoływana np. w instrukcji
     `v0 + v1`.
  2. Funkcja `operator+` nie powinna kopiować swoich argumentów podczas
     wywołania.

## Przestrzenie nazw, przeciążanie funkcji, parametry domyślne

### Zadanie 4

Obejrzyj poniższy program:
```cpp
#include "lib/util.h"
#include <cstdlib>
#include <iostream>

int
main()
{
  const std::size_t n = 7;

  int tab0[n] = { 0, 7, 3, 42, 12, 100, 50 };
  util::sort(tab0, n);
  std::cout << "Elementy posortowane rosnaco: \n";
  for (auto x : tab0) {
    std::cout << ' ' << x << '\n';
  }

  std::cout << "\nElementy posortowane malejaco: \n";
  util::sort(tab0, n, false);
  for (auto x : tab0) {
    std::cout << ' ' << x << '\n';
  }

  const char* tab1[n] = { "fonon",  "plazmon",  "ekscyton", "polaryton",
                          "dziura", "elektron", "foton" };
  util::sort(tab1, n, true);
  std::cout << "\n\nElementy posortowane rosnaco: \n";
  for (auto x : tab1) {
    std::cout << ' ' << x << '\n';
  }

  std::cout << "\nElementy posortowane malejaco: \n";
  util::sort(tab1, n, false);
  for (auto x : tab1) {
    std::cout << ' ' << x << '\n';
  }
}
```

Stwórz funkcję sortującą o nazwie `sort` umieszczoną w przestrzeni nazw `util`.
Niech funkcja `sort` przyjmuje następujące argumenty:
  * tablicę elementów typu `int` lub `const char*`
  * długość ww. tablicy
  * opcjonalny argument logiczny, który określi, czy sortowanie ma odbywać się
    rosnąco czy malejąco (domyślne sortowanie jest rosnące)

Można wybrać dowolny algorytm sortowania, np. sortowanie bąbelkowe lub przez
wybieranie.

Rozwiązanie powinno składać się trzech plików — oto ich lista:
  * główny plik programu, np. `main.cc` lub `main.cpp` o treści podanej wyżej
    (nie należy jej modyfikować)
  * plik nagłówkowy umieszczonyw w osobnym katalogu, np. `lib/util.h`
  * plik implementacji umieszczony w ww. katalogu, np. `lib/util.cc` lub
    `lib/util.cpp`

W pliku nagłówkowym powinien znaleźć się tzw. *include (header) guard*, np.:
```cpp
#ifndef LIB_UTIL_H
#define LIB_UTIL_H

// Tutaj powinna znaleźć się treść pliku nagłówkowego, np. dyrektywa include
// oraz deklaracje funkcji zdefiniowanych w lib/util.{cc,cpp}.

#endif // LIB_UTIL_H
```

Po skompilowaniu i uruchomieniu program powinien wypisywać następująco
komunikat:
> Elementy posortowane rosnaco:   
> \ 0  
> \ 3  
> \ 7  
> \ 12  
> \ 42  
> \ 50  
> \ 100  
> \  
> Elementy posortowane malejaco:   
> \ 100  
> \ 50  
> \ 42  
> \ 12  
> \ 7  
> \ 3  
> \ 0  
>   
>   
> Elementy posortowane rosnaco:   
> \ dziura  
> \ ekscyton  
> \ elektron  
> \ fonon  
> \ foton  
> \ plazmon  
> \ polaryton  
>   
> Elementy posortowane malejaco:   
> \ polaryton  
> \ plazmon  
> \ foton  
> \ fonon  
> \ elektron  
> \ ekscyton  
> \ dziura
