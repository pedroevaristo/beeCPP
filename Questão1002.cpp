#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
/*A = π . R2 */
int main(){

double R, A;
double pi = 3.14159 ;

cin>> R;

A =  (pi * (R * R));

cout <<"A="<< fixed << setprecision(4) << A <<endl;

return 0;//concertdo!!
/* 100.64
A=31819.3
--31.819,310315 n° correto que deveria mostrar
O problema é que não mostra o numero completo de A. Parece que está limitado para mostrar
*/
}