#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    plik.open("Bazy danych « Ksiazki - Wydawnictwo Helion, ksiegarnia helion.pl.html", ios::in);

    string linia;
    string cena = "constprice=";

    while(getline(plik, linia))
    {
        bool found = linia.find(cena) != string::npos;

        if (found)
        {
            cout << linia << endl;
        }
    }
    return 0;
}
