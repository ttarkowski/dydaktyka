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
