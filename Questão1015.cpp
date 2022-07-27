#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<cmath>
using namespace std;

int main(){
  double t;//total
  double x1,y1;
  double x2, y2;
//e um deles vai ter um casa decimal
  cout<<"Digite  4 digitos na ordem por coluna com |x | y| e vai ter a subtracao entre eles: \n";
  cin>>x1>>y1;//prestar mais atençção ao colocar na ordem as coisas pois pode atrapalhar no calculo abaixo. OBS!
  cout<<" ======== \n";
  cin>>x2>>y2;

// ajeitar para que 4.4721 a virgula fique assim 4.721
  t = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
  cout<<"\n"<< t;
//Verificar a matemática acima está dando algum erro durante o processo
}
