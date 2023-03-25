#include <iostream>

using namespace std;


/*Języki programowania Grupa 2DZI Damian Potoczny moduł 1 Funkcje Zadanie 1*/

void reset(int &zmienna)
{
    zmienna = 0;
}

int main()
{
    cout << "Jezyki Porgramowania " << "2DZI " << "Damian " << "Potoczny " << endl;
    cout << "Moduł 1 "<< "Funkcje " << "Zadanie 1"<< endl;
    int zmienna;
    cout<<"Podaj zmienna:" << endl;
    cin >> zmienna;
    reset(zmienna);
    cout<<"Zmienna zresetowana" << endl;
    cout<<zmienna<<endl;

    return 0;
}