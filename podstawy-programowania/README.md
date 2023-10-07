# Podstawy programowania

## Informacje organizacyjne

  * Przedmiot _Podstawy programowania_ składają się z wykładu oraz laboratorium
    komputerowego natomiast osobny przedmiot _Laboratorium z programowania_ to
    zajęcia stowarzyszone w formie dodatkowego laboratorium komputerowego.
  * Laboratorium z _Podstaw programowania_ to zajęcia o charakterze
    instruktażowym — zadania są rozwiązywane wspólnie z osobą prowadzącą zajęcia.
    Rozwiązania podlegają ocenie.
  * Rozwiązania na laboratorium z _Podstaw programowania_ powinny zostać oddane
    jeszcze w trakcie trwania zajęć. Dopuszcza się zaprezentowanie rozwiązanie
    na następnych zajęciach przy czym maksymalna ocena może wtedy wynieść 80%
    nominalnej punktacji.
  * _Laboratorium z programowania_ to indywidualna praca własna każdego
    uczestnika zajęć oceniana przez osobę prowadzącą zajęcia.
  * Sposób punktacji zadań z _Laboratorium z programowania_ ustala osoba
    prowadząca zajęcia.
  * Zadania do rozwiązania na laboratoriach obydwu przedmiotów są dostępne na
    stronie dr. inż. Mirosława Barańskiego umieszczonej pod adresem
    <https://mirek.ii.uph.edu.pl/programowanie/>.
  * W ramach laboratorium z _Podstaw programowania_ wymagane jest także
    rozwiązanie i obronienie zadania indywidualnego.
  * Propozycje zadań indywidualnych zostaną zaprezentowane do końca
    października danego roku akademickiego.
  * Za laboratorium z _Podstaw programowania_ można uzyskać 130 punktów za
    rozwiązywanie zadań oraz 70 punktów za rozwiązanie i obronienie zadania
    indywidualnego. W celu dopuszczenia do egzaminu należy uzyskać przynajmniej
    100 punktów. Wymagany do dopuszczenia do egzaminu próg punktacji zostanie
    obniżony w przypadku nieodbycia się zajęć laboratoryjnych.
  * Egzamin z przedmiotu _Podstawy programowania_ składa się z części pisemnej
    i ustnej. Na ocenę końcową składają się następujące składniki z wagami:
      * 40% laboratoria oraz zadanie indywidualne
      * 40% egzamin pisemny
      * 20% egzamin ustny
  * Finalna ocena z przedmiotu _Podstawy programowania_ jest przyznawana przez
    wykładowcę według następującej skali:
      * 91%-100% — bardzo dobra
      * 81%-90%  — dobra plus
      * 71%-80%  — dobra
      * 61%-70%  — dostateczna plus
      * 51%-60%  — dostateczna
      *  0%-50%  — niedostateczna
  * Ocena za przedmiot _Laboratorium z programowania_ jest przyznawana przez
    osobę prowadzącą daną grupę laboratorium według kryteriów danej osoby
    prowadzącej. O szczegóły należy pytać na zajęciach z _Laboratorium
    z programowania_.
  * Laboratoria z _Podstaw programowania_ oraz zajęcia z _Laboratorium
    z programowania_ mogą odbywać się wymiennie w ramach planu zajęć — więcej
    informacji otrzymają Państwo na bieżąco od osób prowadzących laboratoria.
  * W przypadku trudności z opanowaniem materiału zajęć dostępne dla Państwa
    dyspozycji są konsultacje u osób prowadzących zajęcia.
  * W sprawach nieuregulowanych powyższymi zapisami stosuje się przepisy
    Regulaminu studiów.

**Poniżej znajduje się robocza wersja konspektu wykładu.**

## 1. Wstęp do programowania

### Informatyka a programowanie

Można w przybliżeniu uznać, że informatyka ma się tak do programowania, jak
fizyka do inżynierii mechanicznej. Fizyka jest nauką ścisłą, która opisuje świat
z użyciem języka jakim jest matematyka. Inżynieria mechaniczna zaś wykorzystuje
prawa fizyki do opisu i konstrukcji urządzeń. Tak samo informatyka jest nauką
ścisłą a programowania wykorzystuje jej osiągnięcia do tworzenia programów
uruchamianych na urządzeniach elektronicznych.

*Informatyka* jest nauką o przetwarzaniu informacji w sposób automatyczny.

### Algorytm i jego własności

*Algorytm* to skończony ciąg ściśle określonych instrukcji, zazwyczaj używanych
do rozwiązania jakiegoś problemu lub wykonania obliczeń.

### Maszyna Turinga

*Maszyna Turinga* została zaproponowana przez Alana Turinga w 1936 i jest bardzo
prostym modelem obecnie stosowanego komputera. Abstrakcja ta składa się
z nieskończonej taśmy, głowicy i mechanizmu sterującego:
  * Taśma jest podzielona na pola (komórki). Na każdym polu może zostać zapisany
    symbol w języku maszyny.
  * Głowica służy do odczytywania i zapisywania symboli. Może ona się znaleźć
    nad dowolnym polem taśmy.
  * Mechanizm sterujący jest elementem maszyny, który decyduje o jej działaniu.
    Może on się znaleźć w danej chwili czasu w jednym ze skończenie wielu
    stanów.

Mechanizm sterujący podejmuje decyzje do wykonania przez maszynę Turinga.
Decyzja jest podejmowana na podstawie bieżącego stanu mechanizmu a także symbolu
znajdującego się w polu pod głowicą. Taką decyzją może być:
  * przesunięcie głowicy względem taśmy
  * zmiana zawartości pola taśmy
  * zmiana stanu mechanizmu

**Jak widać maszyna Turinga jest środowiskiem do wykonywania algorytmów.**

Warto zauważyć, że komputery fizyczne mają mniejsze możliwości wykonywania
programów aniżeli maszyna Turinga, ponieważ ta ostatnia ma nieskończenie wiele
miejsca na taśmie.

### Języki programowania

*Język programowania* jest systemem notacji umożliwiającym zapisywanie programów
komputerowych.

Przykładowe style programowania:
  * imperatywny
  * proceduralny
  * deklaratywny
  * funkcyjny
  * obiektowy
  * generyczny
  * programowanie w logice

Uwaga: Jeden język programowania może wspierać więcej niż jeden styl
programowania. Na przykład C++ wspiera styl imperatywny, proceduralny,
funkcyjny, obiektowy i generyczny. Istnieją też języki programowania, w których
programuje się w jednym stylu. Na przykład Haskell jest językiem czysto
funkcyjnym.

### Języki interpretowane i kompilowane

### Schematy blokowe

W celu zapisu algorytmu można wykorzystać *pseudokod*, będący czymś pośrednim
między potencjalnie nieprecyzyjnym językiem naturalnym a precyzyjnym językiem
programowania, lub *schemat blokowy*, będący graficzną wizualizacją wykonania
algorytmu. W tym podpunkcie zostaną przedstawione elementy notacji z użyciem
schematów blokowych.

  * *Blok graniczny* (ang. *terminal*), nazywany również *etykietą*, służy do
    określania początku lub końca algorytmu.  
    ![Blok graniczny](/podstawy-programowania/fig/flowchart/terminal.svg)
  * *Blok operacyjny* (ang. *process*) oznacza zestaw operacji zmieniających
    dane, np. przypisanie wartości do zmiennej. (Nazwa zmiennej w poniższym
    rysunku została celowo pozostawiona w języku angielskim.)  
    ![Blok operacyjny](/podstawy-programowania/fig/flowchart/process.svg)
  * *Predykat* lub *decyzja* (ang. decision) polega na sprawdzeniu czy dany
    warunek jest spełniony i wyborze jednej z dwóch możliwości.  
    ![Decyzja](/podstawy-programowania/fig/flowchart/decision.svg)

## 2. Generacje języków programowania

## 3. Typy danych i zmienne

## 4. Instrukcje

## 5. Wskaźniki i zmienne dynamiczne

## 6. Wyrażenia

## 7. Złożone typy danych

## 8. Funkcje

## 9. Zasięg i widoczność

## 10. Rekurencja

## 11. Metoda wstępująca i zstępująca

## 12. Klasy i obiekty

## 13. Biblioteki programistyczne

## 14. Pliki

## Bibliografia
