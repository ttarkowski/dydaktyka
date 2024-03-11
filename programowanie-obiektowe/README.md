# Programowanie obiektowe

## Informacje organizacyjne

  * Ocena za laboratorium jest przyznawana za rozwiązanie zadań oraz za
    zrealizowanie projektu indywidualnego.
  * Zadania do rozwiązania na ocenę będą publikowane poniżej. Zadania z zajęć
    $`n`$ można oddawać do oceny na zajęciach $`n`$ lub $`n + 1`$.
    W usprawiedliwionych przypadkach można to uczynić w terminie późniejszym.
  * Projekt indywidualny należy oddać do oceny najpóźniej w dniu przedostatnich
    zajęć.
  * Pierwsze zajęcia nie są oceniane a ostatnie służą do omówienia wyników
    projektu indywidualnego.

## Moduł 0

*Nieoceniane zajęcia wstępne.*

## Moduł 1

### Zmienne składowe klasy. Konstruktory. Metody składowe

Przykład (pełny przykład znajduje się w katalogu
[Rectangle/](/programowanie-obiektowe/examples/01/Rectangle/)):
```java
public class Rectangle {
    // Zmienne składowe
    private double a;
    private double b_; // Inna konwencja…

    // Konstruktor
    public Rectangle(double a, double b) {
        this.a = a;
        b_ = b; // … która nie wymaga tutaj użycia `this`.
    }

    // Metody składowe
    public double area() { return a * b_; }
    public double get_a() { return a; }
    public double get_b() { return b_; }

    public static void main(String[] args) {
        Rectangle r = new Rectangle(4.2, 1.0);
        System.out.println("Wymiary: " + r.get_a() + " x " + r.get_b());
        System.out.println("Powierzchnia: " + r.area());
    }
}
```

Wynik działania przykładu:
> Wymiary: 4.2 x 1.0  
> Powierzchnia: 4.2

### Wczytywanie danych. Liczby pseudolosowe

Przykład (pełny przykład znajduje się w katalogu
[Random/](/programowanie-obiektowe/examples/01/Random/)):
```java
import java.util.Scanner; // Dzięki temu później można napisać `Scanner`
                          // zamiast `java.util.Scanner`.

public class Random {
    public static void main(String[] args) {
        // Obiekt `s` umożliwia odczyt ze standardowego wejścia.
        Scanner s = new Scanner(System.in);
        System.out.println("Program losuje wartości z przedziału [a * pi, b * pi].");
        System.out.print("Podaj wartość a: ");
        double a = s.nextDouble();
        System.out.print("Podaj wartość b: ");
        double b = s.nextDouble();
        s.close();
        
        // Obiekt `r` będzie generował liczby pseudolosowe.
        java.util.Random r = new java.util.Random();
        double res = (r.nextDouble() * (b - a)) + a;
        res *= Math.PI;
        System.out.println("Wylosowana wartość: " + res);
    }
}
```

Wynik działania przykładu:
> Program losuje wartości z przedziału [a * pi, b * pi].  
> Podaj wartość a: 0  
> Podaj wartość b: 1  
> Wylosowana wartość: 1.1054802036741138

### Zadania

### Dokumentacja

  * <https://docs.oracle.com/javase/tutorial/java/javaOO/classes.html>
  * <https://docs.oracle.com/javase/8/docs/api/java/util/Scanner.html>
