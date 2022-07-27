#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

void calculate();

int main()
{
    double n, x;

    cin >> n; // quantid. de repetições
    x = 0.0;
    for (int i = 0; i < n; i++)
    {
        x+=6.0;
        x = (1.0 / x);
    }
    x += 3.0;
    cout<< setprecision(10) <<x<<endl;
}

//solução de https://github.com/eduardo-mior/URI-Online-Judge-Solutions/blob/master/Iniciante/URI%202161.java