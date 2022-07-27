#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void function(double arr[], double b);

int main()
{
    double arr[3];
    int loop;
    loop = 0;
    do
    {
        cin >> arr[loop];

        loop += 1;

    } while (loop < 3);

    function(arr, 3);
}

void function(double arr[], double b)
{
    double total = 0, total1 = 0, result = 0, result1 = 0;

    total = (pow(arr[1], 2) - 4 * arr[0] * arr[2]);

    cout << "mostrando o valor do calculo dentro do delta = " << total << endl;




        total1 = sqrt(total);

        result = ((- arr[1] + (sqrt(total))) / (2 * arr[0]));

        result1 = ((- arr[1] - (sqrt(total))) / (2 * arr[0]));

        cout<<result<<endl;

        cout<<result1<<endl;

        // result >= 0 && result1 >= 0
    if (result == 0 || isinf(result) && result1 == 0 || isinf(result1))

    {
        cout << "Nao possui solucoes reais ou e o mesmmo resultado. O programa sera incerrado. " << endl;

        exit(0);
    } // result < 0 && result1 < 0
    else if (result != 0 || !isinf(result) && result1 != 0|| !isinf(result1) )
    {
        cout << "Resultado 1: " << result << endl;
        cout << "Resultado 2: " << result1 << endl;
    }
}