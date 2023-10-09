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

### Algorytm. Maszyna Turinga

*Algorytm* to skończony ciąg ściśle określonych instrukcji, zazwyczaj używanych
do rozwiązania jakiegoś problemu lub wykonania obliczeń.

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

**Jak widać maszyna Turinga jest środowiskiem do wykonywania algorytmów.** Jest
też ona znacznie prostsza w opisie aniżeli dowolny fizyczny komputer, dlatego
znacznie łatwiej jest dokonywać rozumowania na temat wykonywania algorytmów.
Może to być zastosowane w opisie **złożoności obliczeniowej algorytmu**.
Warto przy okazji zauważyć, że komputery fizyczne mają formalnie mniejsze
możliwości wykonywania programów aniżeli maszyna Turinga, ponieważ ta ostatnia
ma nieskończenie wiele miejsca na taśmie. W granicy odpowienio małych programów
komputerowych ta różnica nie ma znaczenia.

*Hipoteza Churcha-Turinga:* Każdy problem intuicyjnie uznawany za obliczalny,
jest obliczalny przez maszynę Turinga.

Chociaż hipoteza Churcha-Turinga nie została udowodniona z powodu braku precyzji
określenia "**intuicyjnie uznawany** za obliczalny", to jednak żaden znany model
obliczeń nie jest w stanie wyrazić więcej aniżeli maszyna Turinga.

### Języki programowania

*Język programowania* $`\mathcal{L}`$ jest systemem notacji umożliwiającym
zapisywanie programów komputerowych.

Jeśli $`\mathcal{D}`$ jest zbiorem danych, to program można uznać jako następującą
funkcję częściową:
```math
\mathcal{P}^{\mathcal{L}}\colon \mathcal{D}\rightarrow \mathcal{D}
```
taką, że:
```math
\mathcal{P}^{\mathcal{L}}(\textnormal{dane wejściowe}) =
\textnormal{dane wyjściowe}
```
Program $`\mathcal{P}^{\mathcal{L}}`$ może nigdy nie kończyć się dla niektórych
danych wejściowych, dlatego też jest on określany jako funkcja częściowa (por.
problem stopu).

Zbiór wszystkich programów w języku $`\mathcal{L}`$ będzie oznaczany jako
$`\mathcal{Prog}^{\mathcal{L}}`$.

*Maszyną abstrakcyjną* $`\mathcal{M}_{\mathcal{L}}`$ dla języka $`\mathcal{L}`$
jest zbiór algorytmów i struktur umożliwiających przechowywanie i wykonywanie
programów napisanych w języku $`\mathcal{L}`$.

Wspomniana wyżej maszyna Turinga jest najbardziej podstawową maszyną
abstrakcyjną.

*Językiem maszynowym* dla maszyny abstrakcyjnej $`\mathcal{M}_{\mathcal{L}}`$
jest taki język $`\mathcal{L}`$, który jest *zrozumiały* przez interpreter tej
maszyny.

Językiem maszynowym dla maszyny Turinga są pewne napisy nad alfabetem złożonym
z symboli maszyny Turinga.

Językiem maszynowym dla współczesnego komputera są pewne napisy nad alfabetem
zero-jedynkowym związane z brakiem lub przepływem prądu w procesorze komputera.
Napisy te są równoważne semantycznie (znaczeniowo) z językiem asemblera danej
architektury komputera.

Współczesny komputer fizyczny jest również przykładem maszyny abstrakcyjnej.

### Języki interpretowane i kompilowane

Implementacja danego języka programowania może mieć formę *interpretowaną* lub
*kompilowaną*.

Niech $`\mathcal{M}_{0 \mathcal{L}_0}`$ oznacza maszynę abstrakcyjną z językiem
maszynowym $`\mathcal{L}_0`$.

Poprzez czysto interpretowaną implementację języka programowania $`\mathcal{L}`$
dla maszyny abstrakcyjnej $`\mathcal{M}_{0 \mathcal{L}_0}`$ rozumie się tzw.
interpreter, który może być zdefiniowany jako funkcja częściowa:
```math
\mathcal{I}_{\mathcal{L}}^{\mathcal{L}_0}\colon
\mathcal{Prog}^{\mathcal{L}} \times \mathcal{D} \rightarrow \mathcal{D}
```
która spełnia warunek:
```math
\mathcal{I}_{\mathcal{L}}^{\mathcal{L}_0}
(\mathcal{P}^{\mathcal{L}}, \textnormal{dane wejściowe}) =
\mathcal{P}^{\mathcal{L}} (\textnormal{dane wejściowe})
```

Poprzez czysto kompilowaną implementacją języka programowania $`\mathcal{L}`$
dla maszyny abstrakcyjnej $`\mathcal{M}_{0 \mathcal{L}_0}`$ rozumie się tzw.
kompilator, który może być zdefiniowany jako funkcja częściowa:
```math
\mathcal{C}_{\mathcal{L}}^{\mathcal{L}_0}\colon
\mathcal{Prog}^{\mathcal{L}} \rightarrow \mathcal{Prog}^{\mathcal{L}_0}
```
która spełnia warunek:
```math
\mathcal{C}_{\mathcal{L}}^{\mathcal{L}_0}
(\mathcal{P}^{\mathcal{L}}) (\textnormal{dane wejściowe}) =
\mathcal{P}^{\mathcal{L}} (\textnormal{dane wejściowe})
```

### Przykładowe style programowania

#### ▸ Imperatywny styl programowania

W imperatywnym stylu programowania sterowanie programem jest zaprezentowane
wprost w kodzie źródłowym a stan programu (np. wartości zmiennych) ulegają
zmianom.

Przykład stylu imperatywnego w asemblerze (pełny przykład znajduje się w pliku
[loop.asm](/podstawy-programowania/examples/01/loop-asm/loop.asm)):
```asm
_start:
        mov rcx, 1000000000

loop:
        dec rcx         ; Dekrementacja rejestru rcx (licznika pętli).
        jnz loop        ; Skok do etykiety rozpoczynającej pętlę.
        ;; (Powyższe dwie instrukcje można skrócić za pomocą loop.)
```

Imperatywny styl programowania jest jednym z najbardziej popularnych. Jest
szeroko stosowany w różnych językach programowania.

#### ▸ Strukturalny/proceduralny styl programowania

W strukturalnym/proceduralnym stylu programowania wciąż stosuje się techniki
imperatywne. Są one jednak wzbogacone o bardziej zaawansowane środki kontroli
przepływu dzięki zastosowaniu instrukcji warunkowych, pętli oraz procedur
(funkcji). Oznacza to unikanie instrukcji typu *goto*.

Przykład stylu strukturalnego/proceduralnego w języku Python
([fractal.py](/podstawy-programowania/examples/01/fractal-py/fractal.py)):
```python
# Transformacja przekształcająca wektor [x, y] na nowy.
def transformation(c, x, y):
    x_new = c[0] * x[-1] + c[1] * y[-1]
    y_new = c[2] * x[-1] + c[3] * y[-1] + c[4]
    x.append(x_new)
    y.append(y_new)

# Paproć Barnsley'a (fraktal).
def Barnsley(x, y):
    cs = [[ 0.00,  0.00,  0.00,  0.16,  0.00], \
          [ 0.85,  0.04, -0.04,  0.85,  1.60], \
          [ 0.20, -0.26,  0.23,  0.22,  1.60], \
          [-0.15,  0.28,  0.26,  0.24,  0.44]]
    r = np.random.uniform(0,1)
    if r < 0.01:
        transformation(cs[0], x, y)
    elif r < 0.01 + 0.85:
        transformation(cs[1], x, y)
    elif r < 0.01 + 0.85 + 0.07:
        transformation(cs[2], x, y)
    else:
        transformation(cs[3], x, y)
```

TODO:
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
  * *Predykat* lub *decyzja* (ang. *decision*) polega na sprawdzeniu czy dany
    warunek jest spełniony i wyborze jednej z dwóch możliwości.  
    ![Decyzja](/podstawy-programowania/fig/flowchart/decision.svg)
  * *Blok wejścia/wyjścia* (ang. *input/output*) reprezentuje operacje wejścia
    (np. wczytanie danych z klawiatury) oraz wyjścia (np. wypisanie danych na
    ekran).  
    ![Blok wejścia/wyjścia](/podstawy-programowania/fig/flowchart/in-out.svg)
  * *Łącznik* i *strzałka* (ang. *flowline*, *arrowhead*) są wykorzystywane do
    wskazania kolejności wykonywanych w algorytmie operacji. Standardowo
    korzysta się z łącznika gdy przepływ jest naturalny (od góry do dołu oraz
    z lewej do prawej). W przeciwnym razie należy użyć strzałki.  
    ![Łącznik i strzałka](/podstawy-programowania/fig/flowchart/flowline.svg)

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

Maurizio Gabbrielli & Simone Martini. *Programming Languages: Principles and
Paradigms*. Springer-Verlag London Limited, 2010. DOI:
[10.1007/978-1-84882-914-5](https://doi.org/10.1007/978-1-84882-914-5).

Maciej Ślusarek, Przemysław Broniek, Grzegorz Gutowski, Jan Jeżabek. *Złożoność
obliczeniowa*. <https://wazniak.mimuw.edu.pl/>.

Ray Toal. *Classifying Programming Languages*.
<https://cs.lmu.edu/~ray/notes/pltypes/>.
