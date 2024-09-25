#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>

#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenadzer
{
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    int idOstatniegoAdresata;

public:
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
};

#endif // ADRESATMENADZER_H
