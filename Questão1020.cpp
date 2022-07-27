#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << n / 365 << " Ano (s)" << endl;
    n = n % 365;
    cout << n / 30 << " Mes(es)" << endl;
    n = n % 30;
    cout << n << " dia (s)" << endl;
}