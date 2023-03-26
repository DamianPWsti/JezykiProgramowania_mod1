#include <iostream>
#include "dane.h"

using namespace std;


int zmiana(int zmienna)
{
    int przesunieta = zmienna/2;
    int out = 0;
    int iteracja = 0;
        while(przesunieta)
        {
            if(zmienna%2)
                out = out<<1;
            else
                out = (out<<1) + 1;
            zmienna = przesunieta;
            przesunieta /=2;
            iteracja++;
        }
    // for(out=0; zmienna>0; zmienna/=2)
    //     out = 2*out + zmienna%2;
    return out;
}

int main()
{
    cout << "Jezyki Porgramowania " << "2DZI " << name << " " << surname << endl;
    cout << "Modul 1 "<< "Funkcje " << "Zadanie 4"<< endl;
    int zmienna;
    cout<<"Podaj zmienna:" << endl;
    cin >> zmienna;
    
    cout<<"Zmienna zanegowana" << endl;
    cout<<zmiana(zmienna)<<endl;

    system("pause");
    return 0;
}