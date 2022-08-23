#include <iostream>
#include <cstdlib>

void verifynumber(int input[], int num);

using namespace std;

int main()
{
    int loop, amount;

    cin >> amount;

    int input[amount];

    loop = 0;
    while (loop < amount)
    {
        int loop1 = 0, aux, total = 0;

        do
        {
            cin >> input[loop1];

            loop1 += 1;

        } while (loop1 < 2);

        aux = 0;

        while (input[0] > input[1])
        {
            aux = input[0];
            input[0] = input[1];
            input[1] = aux;
        }

        total = abs(input[0] - input[1]);

        cout << total << endl;

        if (total <= 0)
        {
            cout << "Resultado:" << total << endl;
            break;
        }

        int check, repeat = 0, count = 0;

        for (check = 0; check < total; check++)
        {
            input[0] += 1;
            if (input[0] % 2 == 1)
            {
                repeat += input[0];
                count += 1;
            }
        }

        if (repeat < input[1])
        { //|| repeat >=input[1]
            cout << "Resultado: " << repeat << endl;
            
            
        }
        /*if (count >= 2)
        {
            cout<<"dentro do count: "<<repeat<<endl; TO tentnado de todas as formas possiveis com cin>> 3 e 8 e fica dando erro de logica 

possivel solução: http://muitomaiscodigoss.blogspot.com/2018/10/uri-problema-1099-soma-de-impares.html

        }*/
        else
        {
            cout << "resultado = " << repeat - input[1] << endl;
            
        }

        loop += 1;
    }
}