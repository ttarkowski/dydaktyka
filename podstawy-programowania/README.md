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

Uwaga: Jeden język programowania może wspierać więcej niż jeden styl
programowania. Na przykład C++ wspiera styl imperatywny, proceduralny,
funkcyjny, obiektowy i generyczny. Istnieją też języki programowania, w których
programuje się w jednym stylu. Na przykład Haskell jest językiem czysto
funkcyjnym.

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

#### ▸ Obiektowy styl programowania

W obiektowym stylu programowania procedury są zastąpione metodami klas.
Działanie programu polega m.in. na tworzeniu obiektów i wykonywaniu operacji
na nich. Dane są kapsułkowane, tzn. ukrywane przed „światem zewnętrznym”
w obiektach, a same operacje są wykonywane jedynie poprzez ściśle określone
interfejsy.

Przykład stylu obiektowego w języku C++
([stack.cc](/podstawy-programowania/examples/01/stack-cc/stack.cc)):
```cpp
class stack {
  struct item {
    int value;
    item* lower;
  };
  
public:
  stack() : top_{nullptr} {}

  void push(int val) {
    item* aux = top_;
    top_ = new item;
    top_->value = val;
    top_->lower = aux;
  }
  
  void pop() {
    if (top_) {
      item* aux = top_->lower;
      delete top_;
      top_ = aux;
    }
  }
  
  int top() const {
    assert(top_);
    return top_->value;
  }

  bool is_empty() const {
    return top_ == nullptr;
  }

  ~stack() {
    while (!this->is_empty()) {
      this->pop();
    }
  }

private:
  item* top_;
};
```

#### ▸ Generyczny styl programowania (metaprogramowanie)

W generycznym stylu programowania implementuje się algorytmy w sposób
uogólniony, zapominając niejako o konkretnych reprezentacjach typów danych.
W ten sposób tworzy się szablony, które później mogą być zastosowane do
dowolnych typów danych spełniających konkretne wymogi.

Przykład stylu generycznego w języku Object Pascal
([sort.pas](/podstawy-programowania/examples/01/sort-pas/sort.pas)):
```pascal
type
  generic BubbleSort<T> = class
    class procedure sort(var a: array of T);
  end;

  BubbleSortInteger = specialize BubbleSort<integer>;

  class procedure BubbleSort.sort(var a: array of T);
  var
    n, newn, i : integer;
    temp       : T;
  begin
    n := high(a);
    repeat
      newn := low(a);
      for i := low(a) + 1 to n do
      begin
        if a[i - 1] > a[i] then
        begin
          temp := a[i - 1];
          a[i - 1] := a[i];
          a[i] := temp;
          newn := i;
        end;
      end;
    n := newn;
    until n = low(a);
  end;
```

#### ▸ Funkcyjny styl programowania

Programowanie w stylu funkcyjnym polega na operowaniu na funkcjach wyższego
rzędu (tzn. funkcjach, które jako swoje argumenty mogą przyjmować inne funkcje
a także zwracać funkcje jako swój rezultat).

Przykład stylu funkcyjnego w języku Scheme
([conditional.scm](/podstawy-programowania/examples/01/conditional-scm/conditional.scm)):
```lisp
(define true (lambda (x y) (x)))
(define false (lambda (x y) (y)))
(define if_then_else (lambda (a b c) (a b c)))

(define f0 (lambda () (write 'f0)))
(define f1 (lambda () (write 'f1)))

(if_then_else false f0 f1)
(newline)
(exit)
```

#### ▸ Programowanie w logice

Ostatnim stylem programowania do omówienia na ten moment jest programowanie
w logice. Jest to jeden z najmniej popularnych styli programowania, ale ma
istotne znaczenie dla rozwoju informatyki. Opiera się on na tzw. klauzulach
Horna, przestrzeni Herbranda i teorii unifikacji. Programy napisane w tym stylu
mogą służyć do natychmiastowego rozwiązywania zagadek logicznych.

Rozwiążmy zatem słynną zagadkę opublikowaną 17 grudnia 1962 w amerykańskim
magazynie *Life International*:
>   1. Jest pięć domów.
>   2. Anglik mieszka w czerwonym domu.
>   3. Hiszpan posiada psa.
>   4. Kawa jest pijana w zielonym domu.
>   5. Ukrainiec pija herbatę.
>   6. Zielony dom znajduje się bezpośrednio na prawo od domu z kości słoniowej.
>   7. Palacz Old Gold posiada ślimaki.
>   8. Kools jest palony w żółtym domu.
>   9. Mleko jest pijane w środkowym domu.
>   10. Norweg mieszka w pierwszym domu.
>   11. Mężczyzna, który pali Chesterfieldy, mieszka w domu obok mężczyzny
>       z lisem.
>   12. Kools jest palone w domu obok domu, gdzie trzymany jest koń.
>   13. Palacz Lucky Strike pija sok pomarańczowy.
>   14. Japończyk pali Parliaments.
>   15. Norweg mieszka obok niebieskiego domu.
>
> Teraz, kto pije wodę? Kto posiada zebrę?
>
> Dla przejrzystości należy dodać, że każdy z pięciu domów jest pomalowany na
> inny kolor, a ich mieszkańcy mają odmienne narodowości, posiadają inne
> zwierzęta, piją inne napoje i palą amerykańskie papierosy różnych marek
> [sic!]. Jeszcze jedno: w zdaniu 6 „prawo” oznacza Twoje prawo.

Przykład programowania w logice w języku Prolog
([zebra.pl](/podstawy-programowania/examples/01/zebra-pl/zebra.pl)):
```prolog
houses(Hs) :- length(Hs, 5),
  member(h(czerwony, anglik, _, _, _), Hs),
  member(h(_, hiszpan, _, _, pies), Hs),
  member(h(zielony, _, kawa, _, _), Hs),
  member(h(_, ukrainiec, herbata, _, _), Hs),
  right(h(zielony, _, _, _, _), h(kosc_sloniowa, _, _, _, _), Hs),
  member(h(_, _, _, old_gold, slimaki), Hs),
  member(h(zolty, _, _, kool, _), Hs),
  Hs = [_, _,h(_, _, mleko, _, _), _, _],
  Hs = [h(_, norweg, _, _, _)|_],
  next(h(_, _, _, _, lis), h(_, _, _, chesterfield, _), Hs),
  next(h(_, _, _, kool, _), h(_, _, _, _, kon), Hs),
  member(h(_, _, sok_pomaranczowy, lucky_strike, _), Hs),
  member(h(_, japonczyk, _, parliament, _), Hs),
  next(h(_, norweg, _, _, _), h(niebieski, _, _, _, _), Hs),
  member(h(_, _, _, _, zebra), Hs), member(h(_, _, woda, _, _), Hs).
zebra_owner(Owner) :- houses(Hs), member(h(_, Owner, _, _, zebra), Hs).
water_drinker(Drinker) :- houses(Hs), member(h(_, Drinker, woda, _, _), Hs).
```

Uwaga: Brak wielkich liter wynika z wymogów języka Prolog.

### Generacje języków programowania

Współczesna klasyfikacja generacji języków programowania:

  * *Język programowania 1 generacji* (1GL, ang. *1st generation language*) to
    język maszynowy (zob. definicję wyżej) danego komputera. Komputer jest wtedy
    programowany bezpośrednio w swoim własnym języku bez potrzeby użycia
    procedury kompilacji/interpretacji. W przeszłości programowanie odbywało
    się poprzez użycie odpowiednich interfejsów sprzętowych. Obecnie 1GL jest
    stosowane np. do programowania sterowników obsługujących sprzęt.
  * *Język programowania 2 generacji* (2GL) to język asemblera. Język taki jest
    podobny do 1GL z tą istotną różnicą, że zamiast ciągów binarnych stosuje się
    mnemoniki, tzn. skróty od wyrazów języka naturalnego (np. `mov` lub `dec`),
    które z jednej strony ułatwiają pisanie i rozumienie kodów źródłowych,
    a z drugiej wymagają zastosowania procedury asemblacji (kompilacji z kodu
    2GL na kod 1GL).  
    Przykład: asembler x86-64.
  * *Język programowania 3 generacji* (3GL) to język niezależny od danej
    architektury sprzętowej znacznie ułatwiający tworzenie programów
    komputerowych. Język taki jest znacznie bardziej abstrakcyjny aniżeli 2G
    i ukrywa szczegóły danej architektury przed programistą.  
    Przykłady: C++, Object Pascal, Python, Scheme.
  * *Język programowania 4 generacji* (4GL) jest obecnie różnie definiowany.
    Można go rozumieć jako język, który operuje na zbiorach danych zamiast na
    bajtach, albo jako język dziedzinowy (mający wąskie zastosowanie
    aplikacyjne).  
    Przykład: R.
  * *Język programowania 5 generacji* (5GL) to język, w którym programista, aby
    rozwiązać problem, nie implementuje algorytmu a jedynie specyfikuje
    ograniczenia czego przykładem jest wyżej opisane rozwiązanie
    zagadki z zebrą.  
    Przykład: Prolog.

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

### Notacja BNF

*Notacja BNF* (ang. *Backus-Naur form*) jest w informatyce używana m.in. do
opisu składni języków programowania (jest więc tzw. *metaskładnią*). Polega ona
na wyspecyfikowaniu tzw. *reguł produkcji*:
```
<symbol> ::= __wyrażenie__
```
gdzie:
  * `<symbol>` jest *zmienną nieterminalną*
  * znak `::=` oznacza, że `<symbol>` zostanie zastąpiony przez `__wyrażenie__`
  * `__wyrażenie__` składa się z sekwencji symboli terminalnych
    i nieterminalnych

Każda sekwencja w wyrażeniu `__wyrażenie__` jest odseparowana o następnej
symbolem `|` oznaczającym wybór.

Symbole `<`, `>`, `::=` oraz `|` to symbole metajęzyka. Pozostałe symbole są
znakami lub symbolami definiowanego języka.

Przykład: Notacja BNF dla zwykłego zapisu liczb całkowitych może być
następująca:
```
<minus> ::= -
<zero> ::= 0
<cyfra niezerowa> ::= 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
<cyfra> ::= <zero> | <cyfra niezerowa>
<sekwencja cyfr> ::= <cyfra> | <cyfra><sekwencja cyfr>
<liczba nieujemna> ::= <cyfra> | <cyfra niezerowa><sekwencja cyfr>
<liczba ujemna> :: <minus><cyfra niezerowa> | <minus><cyfra niezerowa><cyfra>
<liczba całkowita> ::= <liczba nieujemna> | <liczba ujemna>
```
Symbole `-`, `0`, `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8` oraz `9` są terminalne.
Pozostałe symbole, tzn. `<minus>`, `<zero>`, `<cyfra niezerowa>`, `<cyfra>`,
`<sekwencja cyfr>`, `<liczba nieujemna>`, `<liczba ujemna>` oraz `<liczba
całkowita>`, to symbole nieterminalne.

Notacja BNF, choć bardzo użyteczna, ma pewne wady. Nie ma chociażby możliwości
wyrażenia wprost powtórzeń (należy użyć rekurencji, por. `<sekwencja cyfr>`)
oraz symboli opcjonalnych (trzeba w tym celu użyć symboli pośrednich). Dlatego
też, w celu zaradzenia tym niedogodnościom, stworzono rozszerzenia dla BNF.
Jedym z nich jest *EBNF* (ang. *extended Backus-Naur form*).

## 2. Język C++ — wprowadzenie

Językiem programowania używanym w dalszej części wykładu będzie C++. Język ten
łączy długą historię z nowoczesnymi technikami.

### Historia

Praca nad C++, wtedy jeszcze nazywanym „C z klasami”, rozpoczęła się w 1979.
Wtedy to duński informatyk Bjarne Stroustrup mierzył się w New Jersey (Stany
Zjednoczone) z pewnym problemem z zakresu sieci komputerowych i systemów
operacyjnych a nowy język miał być właśnie rozwiązaniem tego problemu. Stworzony
język okazał się być rozwiązaniem wszechstronnym i z czasem zaczął być coraz
bardziej popularny.

Historia przed standardami języka:
  * 1979 — pierwsza implementacja nowego języka programowania, tzn. C z klasami
  * 1982 — opublikowano podręcznik użytkownika
  * 1985 — Cfront 1.0 oraz pierwsze wydanie książki “The C++ Programming
    Language” (TC++PL)
  * 1989 — Cfront 2.0
  * 1990 — “The Annotated C++ Reference Manual”
  * 1991 — Cfront 3.0 oraz drugie wydanie TC++PL

W 1988 C++ miał około 15 tysięcy użytkowników i pojawił się pomysł na jego
standardyzację.

Standardy języka:
  * 1998 (C++98) — pierwszy standard (skorygowany nieznacznie w 2003)
  * 2011 (C++11) — istotna aktualizacja języka (okres tzw. *nowoczesnego C++*)
  * 2014 (C++14) — małe rozszerzenie względem C++11
  * 2017 (C++17) — duże roszerzenie względem C++14
  * 2020 (C++20) — duże rozszerzenie względem C++17
  * 2023 (C++23) — zbliżająca się aktualizacja języka

Uwaga: Dla rozwiania ewentualnych wątpliwości warto zaznaczyć, że standardem
wykorzystanym w dalszej części wykładu będzie C++20.

### Właściwości

C++ jest językiem trzeciej generacji wspierającym imperatywny, proceduralny,
funkcyjny, obiektowy i generyczny styl programowania. C++ wywodzi się z dwóch
tradycji programistycznych, które bardzo dobrze opisują czym jest i czym
powinien pozostać język C++ mimo swojej ciągłej ewolucji:
  * Pierwsza tradycja jest powiązana z językiem C, BCPL oraz asemblerem. Wniosła
    ona wysoką wydajność kodu wykonywalnego poprzez *bezpośrednie odwzorowanie
    w sprzęcie*.
  * Druga tradycja jest związana z językiem Simula. Wprowadziła ona *abstrakcję
    bez narzutu*.

### Źródła wiedzy o języku

Językowi C++ jest poświęconych wiele materiałów edukacyjnych. Ważnym
uzupełnieniem kursu języka C++ jest:
  * serwis <https://cppreference.com>
  * konferencja CppCon <https://www.youtube.com/CppCon>

Ponadto warto wspomnieć, że istnieje:
  * dokument opisujący standard (obecnie z 2020 roku)

Uwaga: Standard jest zasadniczo przydatny tylko dla twórców języka lub twórców
kompilatorów.

Anglojęzyczne sugestie dotyczące materiałów w postaci książek do przeczytania
można znaleźć na stronie
<https://stackoverflow.com/questions/388242/the-definitive-c-book-guide-and-list/>.

Twórca języka, Bjarne Stroustrup, napisał również
[książkę na temat C++ przeznaczoną początkującym programistom](https://stroustrup.com/programming.html).

## 3. Instrukcje

Uwaga: Dla uproszczenia w opisie składni poszczególnych instrukcji pominięto
*atrybuty* a czasami zastosowano składnię nieformalną. Opis elementów składni
również został uproszczony dla klarowności podstawowego kursu programowania.
Więcej informacji o składni można znaleźć w serwisie <https://cppreference.com>.

Można stwierdzić nieprecyzyjnie, że *instrukcja* programu napisanego w języku
C++ jest fragmentem kodu źródłowego, który po kompilacji wykonuje się
w sekwencji. Oznacza to, że jeśli fragment kodu źródłowego `instrukcja_B`
następuje po fragmencie `instrukcja_A`, to w momencie działania programu
wykonuje się wpierw operacja `A` a następnie operacja `B`.

W języku C++ istnieje 9 typów instrukcji:
  1. instrukcja wyrażenia (ang. *expression statement*)
  2. instrukcja złożona (ang. *compound statement*)
  3. instrukcja wyboru (ang. *selection statement*)
  4. instrukcja iteracji (ang. *iteration statement*)
  5. instrukcja skoku (ang. *jump statement*)
  6. instrukcja z etykietą (ang. *labeled statement*)
  7. instrukcja deklaracji (ang. *declaration statement*)
  8. blok `try` (ang. *try block*)
  9. blok atomowy i synchronizowany (ang. *atomic and synchronized block*)

W następnych podpunktach zostaną omówione typy instrukcji o numerach 1-6. Do
numeru 7 wrócimy jeszcze w ramach tego kursu, aczkolwiek w ograniczony sposób.
Numery 8 i 9 pominiemy na ten
moment — jest to materiał odpowiednio na zaawansowany kurs języka C++ oraz na
kurs poświęcony przetwarzaniu współbieżnemu w języku C++.

### Instrukcja wyrażenia

*Instrukcja wyrażenia* to jeden z najczęściej spotykanych typów instrukcji
w języku C++. Instrukcja wyrażenia składa się z wyrażenia, tzn. sekwencji
operatorów i operandów, oraz znaku `;`:
```cpp
wyrażenie;
```

Instrukcja wyrażenia bez wyrażenia jest nazywana *instrukcją pustą*:
```cpp
;
```

Skoro wyrażenie jest sekwencją operatorów i operandów, przyjrzyjmy się przy
okazji operatorom języka C++.

Operator:
  * przypisania: `a = b`, `a += b`, `a -= b`, `a *=b `, `a /= b`, `a %= b`,
    `a &= b`, `a |= b`, `a ^= b`, `a <<= b`, `a >>= b`
  * inkrementacji: `++a`, `a++`
  * dekrementacji: `--a`, `a--`
  * arytmetyczny: `+a`, `-a`, `a + b`, `a - b`, `a * b`, `a / b`, `a % b`
  * arytmetyczny bitowy: `~a`, `a & b`, `a | b`, `a ^ b`, `a << b`, `a >> b`
  * logiczny: `!a`, `a && b`, `a || b`
  * porównania: `a == b`, `a != b`, `a < b`, `a > b`, `a <= b`, `a >= b`,
    `a <=> b`
  * dostępu: `a[...]`, `*a`, `&a`, `a->b`, `a.b`, `a->*b`, `a.*b`
  * wywołania funkcji: `a(...)`
  * przecinek: `a, b`
  * warunkowy: `a ? b : c`
  * specjalny: `static_cast`, `dynamic_cast`, `const_cast`, `reinterpret_cast`,
    operator rzutowania w stylu C, `new`, `delete`, `sizeof`, `sizeof...`,
    `typeid`, `noexcept`, `alignof`

### Instrukcja złożona

*Instrukcja złożona* nazywana też *blokiem* jest sekwencją instrukcji zgrupowaną
i traktowaną jak jedna instrukcja.

Składnia:
```cpp
{ instrukcja... (opcjonalnie) }
```
  * `instrukcja...` jest sekwencją instrukcji.

Uwagi:
  * Sekwencja instrukcji może być pusta.
  * Instrukcja złożona jest przydatna jako ciało pętli lub w instrukcji
    warunkowej.
  * Instrukcja złożona wprowadza tzw. *zakres*, który określa widoczność nazwy.

Przykład (pełny przykład znajduje się w pliku
[compound/compound.cc](/podstawy-programowania/examples/03/compound/compound.cc)):
```cpp
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
```

### Instrukcja wyboru

*Instrukcja wyboru* steruje przepływem programu wybierając jedną z wielu
możliwości. Istnieją następujące instrukcje wyboru:
  * instrukcja `if`
  * instrukcja `if`-`else`
  * instrukcja `switch`

#### ▸ Instrukcja `if` oraz `if`-`else`

Składnia:
```cpp
if (instrukcja_0 (opcjonalnie) warunek) instrukcja_1
if (instrukcja_0 (opcjonalnie) warunek) instrukcja_1 else instrukcja_2
```

  * `instrukcja_0` jest instrukcją wyrażenia, w tym instrukcją pustą `;`, lub
    pewną deklaracją, zazwyczaj pojedynczej zmiennej połączonej z jej
    zainicjowaniem.
  * `warunek` jest wyrażeniem konwertowalnym na wartość logiczną lub jest
    deklaracją zainicjowanej zmiennej nietablicowej.
  * `instrukcja_1` i `instrukcja_2` są dowolnymi instrukcjami, w tym złożonymi.
    `instrukcja_1` jest wykonywana jeśli `warunek` ewaluuje się do `true`.
    `instrukcja_2` jest wykonywana jeśli `warunek` ewaluuje się do `false`.

Uwaga: W przypadku użycia opcjonalnej instrukcji `instrukcja_0` składnię:
```cpp
if (instrukcja_0 warunek) instrukcja_1
if (instrukcja_0 warunek) instrukcja_1 else instrukcja_2
```
można *w przybliżeniu* przepisać odpowiednio jako:
```cpp
{
  instrukcja_0
  if (warunek)
    instrukcja_1
}
```
oraz:
```cpp
{
  instrukcja_0
  if (warunek)
    instrukcja_1
  else
    instrukcja_2
}
```

#### ▸ Instrukcja `switch`

Składnia:
```cpp
switch (instrukcja_0 (opcjonalnie) warunek) instrukcja_1
```

  * `instrukcja_0` jest instrukcją wyrażenia, w tym instrukcją pustą `;`, lub
    pewną deklaracją, zazwyczaj pojedynczej zmiennej połączonej z jej
    zainicjowaniem.
  * `warunek` jest wyrażeniem lub jest deklaracją zainicjowanej zmiennej
    nietablicowej. Wartość wyrażenia lub deklaracji `warunek` powinna być typu
    całkowitoliczbowego lub enumeracyjnego, lub klasy konwertowalnej na typ
    całkowitoliczbowy lub enumeracyjny.
  * `instrukcja_1` jest dowolną instrukcją, w tym złożoną, w której zezwala się
    na etykiety `case:` oraz `default:` a instrukcja `break` ma szczególne
    znaczenie.

Przykład (pełny przykład znajduje się w pliku
[switch/switch.cc](/podstawy-programowania/examples/03/switch/switch.cc)):
```cpp
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
```

Wynik działania przykładu:
> Podaj liczbe naturalna z zakresu [0, 10]: 5  
> Liczba pierwsza.

### Instrukcja iteracji

*Instrukcja iteracji* wielokrotnie powtarza ten sam kod. Istnieją następujące
instrukcje iteracji:
  * pętla `while`
  * pętla `do`-`while`
  * pętla `for`
  * zakresowa pętla `for`

Uwaga: W standardzie języka C++ z roku 2011 wprowadzono tzw. pętlę zakresową
i nie jest ona omawiana w tym miejscu.

#### ▸ Pętla `while`

Składnia:
```cpp
while ( warunek ) instrukcja
```
  * `warunek` jest wyrażeniem konwertowalnym na wartość logiczną, które jest
    ewaluowane przed każdą potencjalną iteracją pętli, lub jest deklaracją
    zmiennej, która jest inicjowana przed każdą potencjalną iteracją pętli.
    Jeśli otrzymana przez ewalucaję lub inicjację wartość jest konwertowalna na
    `true`, wtedy faktycznie wykonywana jest iteracja pętli. W przeciwnym razie
    pętla jest kończona.
  * `instrukcja` jest dowolną instrukcją, w tym złożoną. `instrukcja` jest
    wykonywana w każdej iteracji pętli.

Przykład (pełny przykład znajduje się w pliku
[while/while.cc](/podstawy-programowania/examples/03/while/while.cc)):
```cpp
#include <iostream>

int
main()
{
  std::cout << "Sposob nr 1:\n";
  int n = 10;
  while (n > 0) {
    std::cout << n << "^2 = " << n * n << '\n';
    --n;
  }

  std::cout << '\n';
  
  std::cout << "Sposob nr 2:\n";
  int i = 10;
  while (int j = i * i) {
    std::cout << i-- << "^2 = " << j << '\n';
  }
}
```

Wynik działania przykładu:
> Sposob nr 1:  
> 10^2 = 100  
> 9^2 = 81  
> 8^2 = 64  
> 7^2 = 49  
> 6^2 = 36  
> 5^2 = 25  
> 4^2 = 16  
> 3^2 = 9  
> 2^2 = 4  
> 1^2 = 1  
>   
> Sposob nr 2:  
> 10^2 = 100  
> 9^2 = 81  
> 8^2 = 64  
> 7^2 = 49  
> 6^2 = 36  
> 5^2 = 25  
> 4^2 = 16  
> 3^2 = 9  
> 2^2 = 4  
> 1^2 = 1

#### ▸ Pętla `do`-`while`

Składnia:
```cpp
do instrukcja while ( warunek ) ;
```

  * `instrukcja` jest dowolną instrukcją, w tym złożoną. `instrukcja` jest
    wykonywana w każdej iteracji pętli.
  * `warunek` jest wyrażeniem konwertowalnym na wartość logiczną, które jest
    ewaluowane po każdej iteracji pętli. Jeśli otrzymana przez ewalucaję wartość
    jest konwertowalna na `false`, wtedy pętla jest kończona.

Przykład (pełny przykład znajduje się w pliku
[do-while/do-while.cc](/podstawy-programowania/examples/03/do-while/do-while.cc)):
```cpp
#include <iostream>

int
main()
{
  char c = 'a';
  do {
    std::cout << c << ": " << static_cast<int>(c) << '\n';
  } while (c++ != 'z');
}
```

Wynik działania przykładu:
> a: 97  
> b: 98  
> c: 99  
> d: 100  
> e: 101  
> f: 102  
> g: 103  
> h: 104  
> i: 105  
> j: 106  
> k: 107  
> l: 108  
> m: 109  
> n: 110  
> o: 111  
> p: 112  
> q: 113  
> r: 114  
> s: 115  
> t: 116  
> u: 117  
> v: 118  
> w: 119  
> x: 120  
> y: 121  
> z: 122

#### ▸ Pętla `for`

Składnia:
```cpp
for ( instrukcja_0 warunek (opcjonalnie) ; wyrażenie (opcjonalnie) ) instrukcja
```

  * `instrukcja_0` jest instrukcją wyrażenia, w tym instrukcją pustą `;`, lub
    pewną deklaracją, zazwyczaj zmiennej licznika pętli połączonej z jego
    zainicjowaniem.
  * `warunek` jest wyrażeniem konwertowalnym na wartość logiczną, które jest
    ewaluowane przed każdą potencjalną iteracją pętli, lub jest deklaracją
    zmiennej, która jest inicjowana przed każdą potencjalną iteracją pętli.
    Jeśli otrzymana przez ewalucaję lub inicjację wartość jest konwertowalna na
    `true`, wtedy faktycznie wykonywana jest iteracja pętli. W przeciwnym razie
    pętla jest kończona.
  * `wyrażenie` jest dowolnym wyrażeniem, które jest wykonywane po każdej
    iteracji pętli i zazwyczaj polega ono na inkrementacji licznika pętli.
  * `instrukcja` jest dowolną instrukcją, w tym złożoną. `instrukcja` jest
    wykonywana w każdej iteracji pętli.

Powyższy opis może być nieco nieintuicyjny, dlatego warto rozważyć pewne dwa
szczególne przypadki. Jeśli `instrukcja_0` jest instrukcją pustą a `warunek`
i `wyrażenie` zostały pominięte to otrzymujemy pętlę nieskończoną, np.:
```cpp
for (;;) {
  // Kod wykonywany w pętli nieskończonej.
}
```
Jeśli `instrukcja_0` jest deklaracją zmiennej licznika połączonej z jego
zainicjowaniem, `warunek` jest wyrażeniem konwertowalnym na wartość logiczną
a `wyrażenie` polega na inkrementacji licznika pętli to otrzymujemy klasyczną
pętlę `for`, np.:
```cpp
for (int i = 0; i < 42; ++i) {
 // Kod wykonywany 42 razy dla i równego odpowiednio 0, 1, ..., 41.
}
```

Przykład (pełny przykład znajduje się w pliku
[for/for.cc](/podstawy-programowania/examples/03/for/for.cc)):
```cpp
#include <iostream>

int
main()
{
  for (int i = 0; i < 10; i += 2) {
    std::cout << i << '\n';
  }
}
```

Wynik działania przykładu:
> 0  
> 2  
> 4  
> 6  
> 8

### Instrukcja skoku

Instrukcja skoku przekazuje przepływ programu. Istnieją następujące instrukcje
skoku:
  * instrukcja `break`
  * instrukcja `continue`
  * instrukcja `return` z opjonalnym wyrażeniem albo z użyciem listy inicjującej
  * instrukcja `goto`

Instrukcja `return` zostanie omówiona przy okazji punktu poświęconego funkcjom.
Instrukcja `goto` prawie nigdy nie powinna być używana i zostanie na ten moment
pominięta. Pozostałe dwie instrukcje są wytłumaczone poniżej.

#### ▸ Instrukcja `break`

Składnia:
```cpp
break ;
```

  * `break` jest instrukcją, która powoduje zakończenie pętli `while`,
    `do`-`while`, `for` (w tym zakresowej) oraz instrukcji `switch`.

Przykład (pełny przykład znajduje się w pliku
[break/break.cc](/podstawy-programowania/examples/03/break/break.cc)):
```cpp
#include <iostream>

int
main()
{
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; ; ++j) {
      std::cout << "* ";
      if (j == i) {
        break; // Zakończenie wewnętrznej pętli.
      }
    }
    std::cout << '\n';
  }
}
```

Wynik działania przykładu:
> \*   
> \* \*   
> \* \* \*   
> \* \* \* \*   
> \* \* \* \* \*   
> \* \* \* \* \* \*   
> \* \* \* \* \* \* \*   
> \* \* \* \* \* \* \* \*   
> \* \* \* \* \* \* \* \* \*   
> \* \* \* \* \* \* \* \* \* \* 

#### ▸ Instrukcja `continue`

Składnia:
```cpp
continue ;
```

 * `continue` jest instrukcją, która powoduje ominięcie pozostałej części
   bieżącej iteracji w pętli `while`, `do`-`while` oraz `for` (w tym
   zakresowej).

Przykład (pełny przykład znajduje się w pliku
[continue/continue.cc](/podstawy-programowania/examples/03/continue/continue.cc)):
```cpp
#include <iostream>

int
main()
{
  for (int i = 0; i < 10; ++i) {
    if (i == 5)
      continue;
    for (int j = 0; j < 10; ++j) {
      if (i == j)
        continue;
      std::cout << "(" << i << ", " << j << ") ";
    }
    std::cout << '\n';
  }
}
```

Wynik działania przykładu:
> (0, 1) (0, 2) (0, 3) (0, 4) (0, 5) (0, 6) (0, 7) (0, 8) (0, 9)   
> (1, 0) (1, 2) (1, 3) (1, 4) (1, 5) (1, 6) (1, 7) (1, 8) (1, 9)   
> (2, 0) (2, 1) (2, 3) (2, 4) (2, 5) (2, 6) (2, 7) (2, 8) (2, 9)   
> (3, 0) (3, 1) (3, 2) (3, 4) (3, 5) (3, 6) (3, 7) (3, 8) (3, 9)   
> (4, 0) (4, 1) (4, 2) (4, 3) (4, 5) (4, 6) (4, 7) (4, 8) (4, 9)   
> (6, 0) (6, 1) (6, 2) (6, 3) (6, 4) (6, 5) (6, 7) (6, 8) (6, 9)   
> (7, 0) (7, 1) (7, 2) (7, 3) (7, 4) (7, 5) (7, 6) (7, 8) (7, 9)   
> (8, 0) (8, 1) (8, 2) (8, 3) (8, 4) (8, 5) (8, 6) (8, 7) (8, 9)   
> (9, 0) (9, 1) (9, 2) (9, 3) (9, 4) (9, 5) (9, 6) (9, 7) (9, 8) 


## 4. Typy danych i zmienne

### Instrukcja prostej deklaracji

W tym miejscu wrócimy jeszcze na chwilę do typów instrukcji omawiając szczególny
przypadek instrukcji deklaracji — instrukcję prostej deklaracji.

*Instrukcja prostej deklaracji* jest instrukcją, która wprowadza i stwarza jeden
lub więcej identyfikatorów, zazwyczaj zmiennych, które może opcjonalnie
zainicjować.

#### ▸ Instrukcja prostej deklaracji zmiennej

Na ten moment ograniczenie do instrukcji prostej deklaracji jest wciąż nazbyt
obszerne. Rozważmy zatem instrukcję prostej deklaracji zmiennej.

Składnia:
```cpp
sekwencja_specyfikatorów lista_deklaratorów ;
```

  * `sekwencja_specyfikatorów` jest sekwencją specyfikatorów opisaną poniżej.
  * `lista_deklaratorów` jest listą deklaratorów, tzn. identyfikatorów — nazw
    zmiennych, z opcjonalnymi wartościami, którymi te zmienne są inicjowane.

Uwaga: Deklarator może zostać zmodyfikowany z użyciem pewnych operatorów, np.
`[]` dla typu tablicowego — będzie to opisane niżej.

*Sekwencję specyfikatorów* ograniczymy na ten moment wyłącznie do następujących
kategorii:
  * wybrane *proste specyfikatory typu*
  * kwalifikator `const`

Przykłady prostych specyfikatorów typu:
  * `bool` — typ logiczny (a zarazem całkowitoliczbowy)
  * `char` — typ znakowy (a zarazem całkowitoliczbowy)
  * `int` — typ całkowitoliczbowy
  * `float`, `double` — typy zmiennoprzecinkowe
  * wcześniej zdefiniowana nazwa klasy, np. `std::string`

Istnieją także specyfikatory typu całkowitoliczbowego, które modyfikują:
  * rozmiar: `short`, `long`
  * kodowanie znaku: `signed`, `unsigned`

Kwalifikator `const` określa, że typ jest stałą.

Przykład:
```cpp
char c = 'A';
const unsigned int answer = 42;
double temperature;
```

### Reguły tworzenia identyfikatorów

Istnieją reguły tworzenia identyfikatorów, w tym nazw zmiennych. Precyzyjne
określenie tych reguł jest dość długie, dlatego ograniczymy się w tym momencie
do następującego opisu.

*Identyfikatorem* może być dowolnie długa sekwencja cyfr `0`-`9`, znaków `_`,
małych (`a`-`z`) i wielkich (`A`-`Z`) znaków alfabetu łacińskiego a także znaków
Unicode, które posiadają właściwość XID_Start lub XID_Continue, z zastrzeżeniem,
że:
  1. pierwszy znak jest małą lub wielką literą alfabetu łacińskiego, znakiem `_`
     lub znakiem Unicode posiadającym właściwość XID_Start
  2. pozostałe znaki (jeśli istnieją) są cyframi, małymi lub wielkimi literami
     alfabetu łacińskiego, znakami `_` lub znakami Unicode posiadającymi
     właściwość XID_Continue
  3. cała sekwencja nie została zarezerwowana przez standard języka

Zauważmy, że powyższy opis byłby kompletną definicją, gdyby nie punkt 3, którego
nie będziemy tutaj omawiać. Warto też zaznaczyć, że wsparcie kompilatorów dla
identyfikatorów posiadających znaki Unicode jest ograniczone, dlatego warto
unikać ich stosowania.

### Szerokość i zakres danych poszczególnych typów fundamentalnych

#### ▸ Typ logiczny `bool`

Szerokość typu `bool` jest zależna od implementacji. Zmienne tego typu mogą
przechowywać jedną z dwóch wartości: `true` lub `false`.

#### ▸ Typy całkowitoliczbowe, w tym znakowe

Standard określa minimalną szerokość typów całkowitoliczbowych a rzeczywista
wielkość bywa czasami większa (zależy to od *modelu danych* stosowanego
przez daną architekturę komputera i systemu operacyjnego).

Minimalne szerokości poszczególnych typów całkowitoliczbowych z wyłączeniem
`bool` według standardu języka C++:
  * `char` — 8 bitów
  * `short int`, `int` — 16 bitów
  * `long int` — 32 bity
  * `long long int` — 64 bity

Uwaga: Specyfikator kodowania znaku `signed`/`unsigned` nie zmienia szerokości
typu.

Może zadziwiać, że typy `short int` oraz `int` mają taką samą szerokość
minimalną. Z drugiej strony dla komputerów osobistych praktyczna realizacja
sytuacji gdzie rozmiar `short int` oraz `int` jest jednakowa właściwie już nie
występuje (miało to miejsce w przypadku wycofanej z użycia architektury Win16).

Szerokości typów na współczesnych 64-bitowych komputerach osobistych:
  * `char` — 8 bitów
  * `short int` — 16 bitów
  * `int` — 32 bity
  * `long int` — 32 lub 64 bity
  * `long long int` — 64 bity

Szerokość typu wpływa na zakres reprezentowalnych wartości i dla typów
całkowitoliczbowych zakres można łatwo wyznaczyć:
  * W przypadku liczb bez znaku (`unsigned`) wszystkie bity są wykorzystywane do
    kodowania cyfr. Dla szerokości równej $`n`$ bitów można zaprezentować liczby
    z zakresu $`[0, 2^n - 1]`$. Poniżej przedstawiono interesujące przypadki
    szerokości i zakresów wartości:
      * 8 bitów: $[0, 255]$
      * 16 bitów: $[0, 65535]$
      * 32 bity: $[0, 4294967295]$
      * 64 bity: $[0, 18446744073709551615]$
  * W przpadku liczb ze znakiem (`signed`) jeden bit jest wykorzystywany do
    kodowania znaku a pozostałe — do kodowania cyfr. Aby uniknąć problemu
    podwójnej reprezentacji wartości zero (+0, -0) wprowadzono kod
    uzupełnieniowy do dwójki i jest to jedyny kod zaakceptowany przez standard
    języka C++. Z użyciem tego kodu dla szerokości równej $`n`$ bitów można
    zaprezentować liczby z zakresu $`[2^{n - 1}, 2^{n - 1} - 1]`$. Poniżej
    przedstawiono interesujące przypadki szerokości i zakresów wartości:
      * 8 bitów: $`[-128, 127]`$
      * 16 bitów: $`[-32768, 32767]`$
      * 32 bitów: $`[-2147483648, 2147483647]`$
      * 64 bity: $`[-9223372036854775808, 9223372036854775807]`$

#### ▸ Typy zmiennoprzecinkowe

Istnieją trzy typy zmiennoprzecinkowe określone w standardzie języka C++:
  * `float` — typ zmiennoprzecinkowy o pojedynczej precyzji: 32 bity
  * `double` — podwójna precyzja: 64 bity
  * `long double` — rozszerzona precyzja: od 64 do 128 bitów w zależności od
    platformy (najpopularniejszym obecnie wyborem jest 80 bitów, choć można też
    z łatwością spotkać implementację opartą o 64 bity)

Sposób kodowania liczb zmiennoprzecinkowych określa standard IEEE 754:
  * *binary32*: 1 bit znaku, 8 bitów wykładnika, 23 bity mantysy
  * *binary64*: odpowienio 1, 11 i 52 bitów
  * *binary128*: 1, 15 i 112 bitów

W przypadku szerokości 80 bitów wykorzystuje się 1 bit znaku, 15 bitów
wykładnika oraz 64 bitów mantysy.

Uwaga: Pole wykładnika bywa też nazywane cechą liczby zmiennoprzecinkowej.

Podczas kodowania liczb zmiennoprzecinkowych może zostać użyta reprezentacja
*normalna* lub *subnormalna*. Na chwilę obecną pominiemy reprezentację
subnormalną i skoncentrujemy się jedynie na reprezentacji normalnej.

W reprezentacji normalnej stosuje się mantysę, która zawsze rozpoczyna się od
wartości 1 i nie jest ona wtedy kodowana w pamięci komputera. Precyzję
dziesiętną można zatem wtedy obliczyć jako
$`\log_{10} 2^{\textnormal{szerokość mantysy kodowanej + 1}}`$
co dla poszczególnych sposobów kodowania oznacza następującą liczbę cyfr
znaczących rozwinięcia dziesiętnego (wartości przybliżone):
  * *binary32* (23 bity mantysy kodowanej): 7
  * *binary64* (52): 15
  * kodowanie na 80 bitach (64): 19
  * *binary128* (112): 34

Zakres wykładników dla reprezentacji normalnej:
  * *binary32*: [-38, +38]
  * *binary64*: [-308, +308]
  * 80 bitów oraz *binary128*: [-4932, +4932]

Skąd biorą się powyższe wartości? Aby to wyjaśnić rozważmy przykład kodowania
*binary32*. Poniższa reprezentacja binarna zawiera informację o znaku,
wykładniku i mantysie i jest reprezentacją normalną pewnej liczby w kodowaniu
*binary32*:
```
0 00000001 00000000000000000000000
```

Co oznaczają te liczby? Pierwsze zero oznacza, że liczba jest dodatnia a ciąg
ostatnich 23 zer informuje, że mantysa jest równa 1 zgodnie z wcześniej
wspomnianą konwencją dla reprezentacji normalnej.

Informacja o wykładniku jest jednak nieco zawoalowana. Jedynka na najmniej
znaczącym bicie dawałaby wartość wykładnika $`2^0`$, czyli 1, co można byłoby
błędnie zinterpretować jako finalną wartość. W kodowaniu zmiennoprzecinkowym
stosuje się jednak przesunięcie wykładnika i od wykładnika o $`n`$ bitach należy
odjąć liczbę $`2^{n - 1} - 1`$. W tym przypadku $`n = 8`$ (reprezentacja
*binary32*), co oznacza, że należy odjąć liczbę 127.

Finalnie otrzymujemy wartość $`2^{-126} \approx 1{,}175494 \cdot 10^{-38}`$,
przy czym reprezentacja dziesiętna jest przybliżona z 7 cyframi rozwinięcia
dziesiętnego (1 cyfra przed separatorem dziesiętnym i 6 cyfr po separatorze).

## 5. Złożone typy danych

### Tablice

Przypomnijmy, że instrukcja prostej deklaracji zmiennej ma składnię:
```cpp
sekwencja_specyfikatorów lista_deklaratorów ;
```
gdzie `lista_deklaratorów` jest listą deklaratorów. Deklarator typu tablicowego
ma składnię opisaną niżej, gdzie wykorzystano operator `[]`.

Składnia:
```cpp
deklarator [wyrażenie (opcjonalnie)]
```

  * `deklarator` jest deklaratorem, tzn. identyfikatorem.
  * `wyrażenie` jest wyrażeniem stałym konwertowalnym na typ `std::size_t`
    i określa rozmiar tablicy, który powinien być większy od zera.

Uwagi:
  * Wyrażenie stałe oznacza, że jego wartość powinna być możliwa do obliczenia
    w momencie kompilacji.
  * Kompilatory mogą rozszerzyć `wyrażenie` na wyrażenie niebędące wyrażeniem
    stałym — jest to jednak niezgodne ze standardem (choć wykorzystanie tej
    możliwości bywa nierzadko praktykowane).
  * Typ `std::size_t` jest typem całkowitoliczbowym bez znaku adekwatnym do
    reprezentowania rozmiarów kontenerów w języku C++.
  * Zamiast zwykłych tablic często lepiej jest korzystać z kontenera
    `std::vector`. Będzie to opisane dalej.

Przykład:
```cpp
int arr[42];
char hello[] = { 'H', 'e', 'l', 'l', 'o', ',', ' ',
                 'w', 'o', 'r', 'l', 'd', '!', '\0' };
```

#### ▸ Tablice wielowymiarowe

Przykład:
```cpp
int arr[3][2] = {{0, 1}, {2, 3}, {4, 5}};
```

W przypadku tablic wielowymiarowych podtablice są umieszczane kolejno w pamięci.
Podobnie zresztą elementy każdej podtablicy są umieszczane kolejno w pamięci.
Powyższy przykład ma więc następujący układ danych w pamięci:
```
0 1 2 3 4 5
```
Oznacza to również, że najbardziej wydajny sposób na przetwarzanie elemenentów
tablicy polega na iterowaniu ostatniego indeksu w najbardziej zagnieżdżonej
pętli (pozwala to na wykorzystanie mechanizmu tzw. *cache prefetching*):
```cpp
const int max_x = 7;
const int max_y = 42;
double data[max_x][max_y];

// ...

double sum = 0.;
for (int x = 0; x < max_x, ++x) {
  for (int y = 0; y < max_y; ++y) {
    sum += data[x][y];
  }
}
```

### `std::vector`

Rozważmy sytuację, w której programista potrzebuje zadeklarować tablicę, której
rozmiar nie jest znany w momencie kompilacji. Jest to sytuacja często spotykana
— tablica taka nosi nazwę VLA (ang. *variable length array*). Przykładowy
program, który demonstruje wykorzystanie VLA jest zaprezentowany poniżej.

Przykład (pełny przykład znajduje się w pliku
[vla/vla.cc](/podstawy-programowania/examples/05/vla/vla.cc)):
```cpp
#include <cstdlib>
#include <iostream>
#include <random>

int
main()
{
  std::size_t n;
  std::cin >> n;
  int tab[n];

  std::mt19937 engine(std::random_device{}());
  for (std::size_t i = 0; i < n; ++i) {
    std::cout << (tab[i] = std::uniform_int_distribution<int>{ 0, 9 }(engine))
              << '\n';
  }
}
```

Ten program można skompilować i uruchomić. Dociekliwy Czytelnik zauważy jednak,
że coś jest nie tak z procedurą kompilacji powyższego programu. Kompilator GCC
wypisuje następujące ostrzeżenie:
> vla.cc: In function ‘int main()’:  
> vla.cc:10:7: warning: ISO C++ forbids variable length array ‘tab’ [-Wvla]  
>    10 |   int tab[n];  
>       |       ^~~

Okazuje się bowiem, że VLA nie jest częścią standardu języka C++ (choć dopuszcza
go język C w standardzie z roku 1999) i jest jedynie rozszerzeniem kompilatora.
Czy można znaleźć lepsze rozwiązanie?

Zanim odpowiemy sobie na to pytanie, rozważmy kolejny problem. Otóż nierzadko
zdarza się, że nie tylko rozmiar tablicy nie jest znany w momencie kompilacji,
ale przydałoby się go zmienić w trakcie wykonania programu. Do tego celu służy
dynamiczna alokacja pamięci, która w C++ może zostać zrealizowana poprzez użycie
operatorów `new` oraz `delete` w wersji tablicowej, tzn. poprzez `new[]` oraz
`delete[]`. Niestety taka forma dynamicznej alokacji pamięci jest rozwiązaniem
niewygodnym i podatnym na poważne błędy programistyczne, które mogą wieść do
katastrofalnych konsekwencji! Czy można znaleźć lepsze rozwiązanie?

Okazuje się, że zarówno problem VLA jak i dynamicznej alokacji pamięci w formie
tablic ma rozwiązanie w języku C++, które jest zarówno zgodne ze standardem jak
i bardzo wygodne w użyciu. Tym rozwiązaniem, jest kontener `std::vector`.

### Struktury

## 6. Funkcje

### Rekurencja

TODO: Omówić instrukcję `return`.

## 7. Zasięg i widoczność

## 8. Wskaźniki i zmienne dynamiczne

## 9. Klasy i obiekty

## 10. Pliki

## 11. Biblioteki programistyczne

## 12. Metoda wstępująca i zstępująca

## Bibliografia

cppreference.com:
  * <https://en.cppreference.com/w/cpp/language/history>
  * <https://en.cppreference.com/w/cpp/language/statements>
  * <https://en.cppreference.com/w/cpp/language/expressions>
  * <https://en.cppreference.com/w/cpp/language/if>
  * <https://en.cppreference.com/w/cpp/language/switch>
  * <https://en.cppreference.com/w/cpp/language/declarations>
  * <https://en.cppreference.com/w/cpp/language/types>

Maurizio Gabbrielli & Simone Martini. *Programming Languages: Principles and
Paradigms*. Springer-Verlag London Limited, 2010. DOI:
[10.1007/978-1-84882-914-5](https://doi.org/10.1007/978-1-84882-914-5).

David Goldberg. *What Every Computer Scientist Should Know about Floating-Point
Arithmetic*. ACM Computing Surveys **23**, 5-48 (1991). DOI:
[10.1145/103162.103163](https://doi.org/10.1145/103162.103163).

Bjarne Stroustrup. *A History of C++: 1979–1991*. History of Programming
Languages—II 699 (1996). DOI:
[10.1145/234286.1057836](https://doi.org/10.1145/234286.1057836).

Bjarne Stroustrup. *Bjarne Stroustrup's homepage*. <https://stroustrup.com/>.

Maciej Ślusarek, Przemysław Broniek, Grzegorz Gutowski, Jan Jeżabek. *Złożoność
obliczeniowa*. <https://wazniak.mimuw.edu.pl/>.

Ray Toal. *Classifying Programming Languages*.
<https://cs.lmu.edu/~ray/notes/pltypes/>.
