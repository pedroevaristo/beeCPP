#include<iostream>
#include<cstdlib>

#include "head.h"
using namespace std;

int main(){

    /*
    loop e colocar vetores, mas eu quero colcoar no formato de tad e que tenha o struct
    */
head head;
int count = 0;
   do{
    cin>>head.numbers[count];
    count+=1;

   }while(count < 3);
   calculation(head, 3);


}