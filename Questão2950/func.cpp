#include<iostream>
#include <iomanip>
#include<cstdlib>

#include "head.h"
using namespace std;

void calculation(head head, int num){
    
     head.result =(float) head.numbers[2] / (float)(head.numbers[0] + head.numbers[1]);
    
    cout<< setprecision(4) <<"Resultado: "<<head.result<<endl;
}