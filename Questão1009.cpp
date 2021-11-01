#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
double x, y, t;
char nome[7];
//colocar o salario fixo e a venda toal em um mes
    cout<<"Digite seu nome";
    cin>> nome;
    
    cout<< "Qual e o seu salario fixo? \n";
    cin>> x;
    
    cout<<"Qual a sua venda total ? \n";
    cin>> y;
    
    t = ( x + ((y * 15)/100));
    
    cout.precision (6);
    cout<<"Seu valor total e \n"<< t <<endl;
    return 0;
}
/*cout<<"TOTAL = "<< fixed << setprecision(2) << total <<endl;*/