#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <stdlib.h>
// #include <cstring>

#include "head.h"

using namespace std;

int main()
{
    headInformation main;

    cout << "Decimal | Octal | Heaxdecimal |" << endl;

    int loop = 0;
    // cin>> main.decimalStore[loop];
    do
     {
         main.decimalStore[loop] = loop;
         main.octalStore[loop] = loop;
        main.hexadecimalStore[loop] = loop;

        main.octalStore[loop] = octallPrint(main, loop);

        

        cout <<"|  "<<main.decimalStore[loop] << "    |   " << main.octalStore[loop] << "   |    " ;
        if(main.hexadecimalStore[loop] <= 9){
            cout<< main.hexadecimalStore[loop] << "    |" << endl;
        }
        else
        {

           hexadecimalPrint(main, loop);
            cout <<"   |" << endl;

        }

        loop += 1;

    } while (loop < 16);

  
}
