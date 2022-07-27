#include <iostream>
#include <cstdlib>

using namespace std;

int calculate(int input[], int b, int inputtotal, int inputtotal2);

int main()
{
    int input[4], i, receive;
    i = 0;
    do
    {
        cin >> input[i];
        i += 1;
    } while (i < 4);

    int inputtotal = 0, inputtotal2 = 0;
     inputtotal = input[2] + input[3];
     inputtotal2 = input[0] + input[1];

    int x = 0;
     x = calculate(input, 4, inputtotal, inputtotal2);// alguma coisa esta acontecendo aqui que ta dando valor  4
    //cout << x << endl; mesmo mudando de 4 -> 5 o resul. é o mesmo

    // isso tudo dentro d funcao
        if (x == 4)
        {
            cout << "Valores aceitos" << endl;
        }
        else
        {
            cout << "Valores nao aceitos" << endl;
        }
}

int calculate(int input[], int b, int inputtotal, int inputtotal2)
{
    

    int receive = 0;
   

        if (input[1] > input[3])
        {
            receive += 1;
            
        }
         if (input[3] > input[0])
        {
            receive += 1;
        }
         if (inputtotal > inputtotal2)
        {
            receive += 1;
        }
         if (input[2] >= 0 && input[3] >= 0)
        {
            receive += 1;
        }
         else if (input[0] % 2 == 0)
        {
            receive += 1;
        }
    return receive;
}