#include <iostream>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include "head.h"
using namespace std;

/*Tenho que saber usar struct para armazenar as informações e mostrar-las*/
int main()
{
    
    head p;
    int count = 0;
    cout << "digite na sequência:\n 1. os dois diametros\n 2. E a distancia:"<<endl;
    do
    {
        cin >> p.numbers[count];
        count++;
    }
    while (count < 3);
        

   p.result = p.numbers[2] / (p.numbers[0] + p.numbers[1]);

    //cout<<pi<<endl; funciona  mas o de baixo não quer funcionar!>:(

    cout<<"resulto: "<< setprecision(2) << p.result <<endl;

    /* for(int c = 0;c < 3; c++){
         cout<<p.numbers[c]<<endl;

     }*/
}
