% Dom jest określony przez: kolor budynku, narodowość mieszkańca, pijany napój,
% palone papierosy oraz posiadane zwierzę.
% Uwaga: Brak wielkich liter wynika z wymogów języka Prolog.

% Rozwiązanie można otrzymać wpisując po znaku zachęty intepretera Prolog
% następujących poleceń:
%   zebra_owner(Owner).
%   water_drinker(Drinker).
%   houses(Houses).

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

% Definicje pomocnicze:
next(A, B, Ls) :- append(_, [A, B | _], Ls).
next(A, B, Ls) :- append(_, [B, A | _], Ls).

right(A, B, Ls) :- append(_, [B, A | _], Ls).
