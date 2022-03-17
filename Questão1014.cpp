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

}