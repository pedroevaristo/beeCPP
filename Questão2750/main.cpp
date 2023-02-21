#include <iostream>
#include <iomanip>
#include <cstdlib>
//#include <cstring>

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
        if (main.hexadecimalStore[loop] >= 10)
        {
            main.hexadecimalStoreLetters[loop] = hexadecimalPrint(main, loop);
            
        }
        main.hexadecimalStore[loop] = hexadecimalPrint(main, loop);

         

        cout << main.decimalStore[loop] << " | " << main.octalStore[loop] << " |" << main.hexadecimalStore[loop]
             << " | " << endl;

        loop += 1;

    } while (loop < 16);

    // decimal();
    // octal();
    // hexadecimal();
}