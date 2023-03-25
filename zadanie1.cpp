#include <iostream>
#include "dane.h"

using namespace std;


/*Języki programowania Grupa 2DZI Damian Potoczny moduł 1 Funkcje Zadanie 1*/

void reset(int &zmienna)
{
    zmienna = 0;
}

int main()
{
    cout << "Jezyki Porgramowania " << "2DZI " << name << " " << surname << endl;
    cout << "Modul 1 "<< "Funkcje " << "Zadanie 2"<< endl;
    int zmienna;
    cout<<"Podaj zmienna:" << endl;
    cin >> zmienna;
    reset(zmienna);
    cout<<"Zmienna zresetowana" << endl;
    cout<<zmienna<<endl;

    return 0;
}