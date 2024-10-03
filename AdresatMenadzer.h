#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>

#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenadzer
{
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    int idOstatniegoAdresata;
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);

public:
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int dodajAdresata(int idZalogowanegoUzytkownika);
    void dopiszAdresataDoPliku(Adresat adresat);
};

#endif // ADRESATMENADZER_H
