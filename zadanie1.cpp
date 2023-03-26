#include <iostream>
#include "dane.h"

using namespace std;

void reset(int &zmienna)
{
    zmienna = 0;
}

int main()
{
    cout << "Jezyki Porgramowania " << "2DZI " << name << " " << surname << endl;
    cout << "Modul 1 "<< "Funkcje " << "Zadanie 1"<< endl;
    int zmienna;
    cout<<"Podaj zmienna:" << endl;
    cin >> zmienna;
    reset(zmienna);
    cout<<"Zmienna zresetowana" << endl;
    cout<<zmienna<<endl;

    system("pause");
    return 0;
}