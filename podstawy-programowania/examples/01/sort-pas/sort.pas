program SortExample;

type
  generic BubbleSort<T> = class
    class procedure sort(var a: array of T);
  end;

  generic PrintArray<T> = class
    class procedure print(var a: array of T);
  end;

  BubbleSortInteger = specialize BubbleSort<integer>;
  PrintArrayInteger = specialize PrintArray<integer>;

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

  class procedure PrintArray.print(var a : array of T);
  var
    i : integer;
  begin
    for i := low(a) to high(a) do
    begin
      write(a[i]);
      write(' ');
    end;
  end;

procedure draw(lo, hi: integer; var a: array of integer);
var
  i : integer;
begin
  for i := low(a) to high(a) do
  begin
    a[i] := Random(10); //Random(hi - lo) + lo;
  end;
end;

var
  arr : array[0..9] of integer;
begin
  draw(low(arr), high(arr) + 1, arr);
  write('Before: ');
  PrintArrayInteger.print(arr);
  writeln('');
   
  BubbleSortInteger.sort(arr);
  write('After:  ');
  PrintArrayInteger.print(arr);
  writeln('');
end.
