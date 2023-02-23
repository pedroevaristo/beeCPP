#include <iostream>
#include <iomanip>
#include <cstdlib>

#include "head.h"

int result = 0;
using namespace std;

int aux = 0;
int octallPrint(headInformation main, int loop)
{
    if (main.octalStore[loop] > 0)
    {

        if (aux == 7)
        {
            return main.octalStore[loop] += 2;
        }
        aux += 1;
    }
}

void hexadecimalPrint(headInformation main, int loop)
{

    switch (loop)
    {

    case 10:
        cout << 'A';
        break;

    case 11:
        cout <<'B';
        break;
    case 12:
        cout << 'C';
        break;
    case 13:
        cout << 'D';
        break;
    case 14:
        cout << 'E';
        break;
    case 15:
        cout << 'F';
        break;
    }
}
