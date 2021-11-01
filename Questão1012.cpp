#include <bits/stdc++.h>
#include <math.h>

using namespace std;
int main(){
float A, B, C, pi = 3.14159;
float Triangulo, Circulo, Trapezio, Quadrado, Retangulo;

cin>> A;
cin>> B;
cin>> C;


Triangulo = (A * C)/2;
Circulo = (pi *(C*C));
Trapezio = (((A+B)*C)/2);
Quadrado = (B*B);
Retangulo = (A*B);

cout <<"Triangulo = "<< fixed << setprecision(3) <<Triangulo <<endl;
cout <<"Circulo = "<< fixed << setprecision(3) <<Circulo <<endl;
cout <<"trapezio = "<< fixed << setprecision(3) <<Trapezio <<endl;
cout <<"Quadrado = "<< fixed << setprecision(3) <<Quadrado <<endl;
cout<<"Retangulo = "<< fixed << setprecision(3) <<Retangulo <<endl;
return 0;    
}