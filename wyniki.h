#pragma once

#include "ustawienia.h"
#include "konsola.h"
#include "funkcje.h"

void poprawnosc(char *miejsce, char *temp);
void zapisz(int *wyniki,char **miejsce);
void najlepsze(int *wyniki, char **miejsce);
int porownaj(int *wyniki, int wynik_gry);
void przesun(int miejsce, int *wyniki, char **miejsca);
void reset(int *wyniki, char **miejsce);
void odczytaj(int *wyniki, char **miejsce);
