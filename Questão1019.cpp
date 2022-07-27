#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() // praticar fazer main e as funções
{
    int n, hour, min, sec, sectotal;
    cin >> n;

    hour = n / 60;
    sec = n % 3600;// 60 min == 3600 seg
    min = sec / 60;
    sectotal = sec % 60;

    cout<<hour <<" : "<<min <<" : "<<sectotal <<endl;
}
/*
como eu estava fazendo:
float total, N;
    char number;
    cin >> N;
    while (N - (int)N != 0)
    {
        cout << "Digite novamente" << endl;
        cin >> N;
    }

    total = N / 60;

    number = (char)total;

    cout<<number<<endl;

*/