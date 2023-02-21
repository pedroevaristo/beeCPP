#include <iostream>
#include <iomanip>
#include <cstdlib>

#include "head.h"

int result = 0;
using namespace std;

int aux = 0;
int octallPrint(headInformation main, int loop)
{
    if(main.octalStore[loop] > 0){
        
    
    
    
    if (aux == 8)
    {
        

        // cout<<main.octalStore[loop]<<endl;
        return main.octalStore[loop] += 2;
    }
    aux += 1;
    }
}

int hexadecimalPrint(headInformation main, int loop){
    switch (main.hexadecimalStore[loop])
    {
    case 10 :
        return main.hexadecimalStoreLetters[loop] = "A";
        break;
    
    case 11:
        break;
    
    case 12:
        break;
    
    case 13:
        break;
    
    case 14:
        break;

    case 15:
        break;
    }
}
