#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << n / 100 << " nota (s) de 100" << endl;
    n = n % 100;
    cout << n / 50 << " nota (s) de 50" << endl;
    n = n % 50;
    cout<<n / 20 <<" nota (s) de 20"<<endl;
    n = n % 20;
    cout<<n / 10 <<" nota (s) de 10"<<endl;
    n = n % 10;
    cout<<n / 5 <<" nota (s) de 5"<<endl;
    n = n % 5;
    cout<<n / 2 <<" nota (s) de 2"<<endl;
    n = n % 2;
    cout<< n / 1 <<" nota (s) de 1"<<endl;
}