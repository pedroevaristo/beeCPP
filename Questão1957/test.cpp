#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{

    int vector[5], loop = 0;
    cout << "Digite aleatoriamente os numeros: \n"
         << endl;
    do
    {
        cin >> vector[loop];
        loop += 1;
    } while (loop < 5);
    int aux = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int b = 0; b < 5; b++)
        {
            if (vector[i] > vector[b])
            {
                aux = vector[i];
                vector[i] = vector[b];
                vector[b] = aux;
            }
        }
    }

    for (int a = 0; a < 5; a++)
    {
        cout << vector[a]<<endl;
    }
}