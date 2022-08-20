#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>

void function(int even, int odd);

using namespace std;

int main()
{ // utiliza a ideia de numeros impar e pares na matriz
  // bool black = 0, white = 1;
    cout<<"Digite os numeros, para verificar se cair no quadrado branco ou preto :"<<endl;
    int loop = 0, receive[2];
    do
    {
        cin >> receive[loop];
        loop += 1;
    } while (loop < 2);

    int even = 0, odd = 0;

    for (int verify = 0; verify < receive[verify]; verify++)
    {
        if (receive[verify] % 2 == 0)
        { // n° even
            even += 1;
        }
        else
        { // n° odd
            odd += 1;
        }
    }
    function(even, odd);
}

void function(int even, int odd)
{

    if (even == odd)
    {
        cout<<"0 / Quadrado preto";
    }
    if (even == 2 || odd ==2)
    {
        cout<<"1 / Quadrado branco";
    }
}