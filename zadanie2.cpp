#include <iostream>
#include "dane.h"

using namespace std;


/*Języki programowania Grupa 2DZI Damian Potoczny moduł 1 Funkcje Zadanie 2*/

int funkcja(int& suma, int& iloczyn)
{
    int zmienna = 0;
    int licznik = 1;
    cout<<"Podaj liczbe lub '0' zeby zakonczyc: "<< endl;
    cin >> zmienna;
    suma = zmienna;
    iloczyn = zmienna;
    while(zmienna!=0)
    {
        cout<<"Podaj liczbe lub '0' zeby zakonczyc:"<< endl;
        cin >> zmienna;
        if(zmienna)
        {
            suma += zmienna;
            iloczyn *=zmienna;
        }        
        licznik++;
    };
return licznik%2;
    
}

int main()
{
    cout << "Jezyki Porgramowania " << "2DZI " << name << " " << surname << endl;
    cout << "Modul 1 "<< "Funkcje " << "Zadanie 2"<< endl;
    int suma = 0;
    int iloczyn = 0;
    int parzysta = funkcja(suma, iloczyn);
    cout << "Liczba podanych cyfr byla (1-parzysta)" << parzysta << endl;
    cout << "Suma:" << suma << endl;
    cout << "Iloczyn:" << iloczyn << endl;
    return 0;
}