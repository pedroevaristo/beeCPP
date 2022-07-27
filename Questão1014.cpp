<<<<<<< HEAD
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
int x;//x distancia total em KM, y gasto total da gasolina
float y, k;//k = total

    cin>> x;
    cin>> y;

    k = (x/y);

    cout.precision(6);
    cout<< k <<" km/l"<<endl;


=======
#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdlib>

int main(){
int x;//x distance(km). y 
float y,t; //y fuel spent

    std::cout<<"Digite quantos quilometros rodado e o combustivel gasto: \n";
    std::cin>>x;
    std::cin>>y;
        t = x / y;
    
    std::cout<<t<<"km/l"<<std::endl;
>>>>>>> 183fa95c2235ea30f27fd0f1e14ec68961f900f6

}