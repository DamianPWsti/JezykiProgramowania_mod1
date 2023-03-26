#include <iostream>
#include "dane.h"

using namespace std;


int fib(int element)
{
    if(element >2)
    {
        int pierwszy = 1;
        int drugi = 1;
        for(int i=2 ;i<element; i++)
        {
            int temp = drugi;
            drugi +=pierwszy;
            pierwszy = temp;
        }
        return drugi;
    }
    return 1;
}

int main()
{
    cout << "Jezyki Porgramowania " << "2DZI " << name << " " << surname << endl;
    cout << "Modul 1 "<< "Funkcje " << "Zadanie 3"<< endl;

    cout <<"Ktory element cigu Fibonacciego:" << endl;
    int element;
    cin >> element;
    cout << "Wynik: " << fib(element) << endl;

    system("pause");
    return 0;
}