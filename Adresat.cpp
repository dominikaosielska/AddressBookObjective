#include "Adresat.h"

void Adresat::ustawId(int noweId)
{
    if (id >= 0)
        id = noweId;
}

void Adresat::ustawIdUzytkownika(int idZalogowanegoUzytkownika)
{
    if (id >= 0)
        idUzytkownika = idZalogowanegoUzytkownika;
}

void Adresat::ustawImie(string noweImie)
{
        imie = noweImie;
}

void Adresat::ustawNazwisko(string noweNazwisko)
{
        nazwisko = noweNazwisko;
}

void Adresat::ustawNumerTelefonu(string nowyNumerTelefonu)
{
        numerTelefonu = nowyNumerTelefonu;
}

void Adresat::ustawEmail(string nowyEmail)
{
        email = nowyEmail;
}

void Adresat::ustawAdres(string nowyAdres)
{
        adres = nowyAdres;
}
