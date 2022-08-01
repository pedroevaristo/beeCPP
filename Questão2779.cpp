#include <iostream>
#include <cstdlib>

using namespace std;

int main() // esse problema da certo com lista
{
    int n, m; // n =total de figurinhas + espaços

    cin >> n;
    cin >> m;

    int arr[m], i, total;

    i = 0;

    do
    {
        cin >> arr[i];

        i += 1;

    } while (i < m);

    int aux = 0;

    int v = 0;

    for (int x = 0; x < m; x++)
    {
        for (int y = 0; y < m; y++)
        {
            if (arr[x] > arr[y])
            {
                aux = arr[x];
                arr[x] = arr[y];
                arr[y] = aux;
            }
        }
    }
    int num = 0;

    for (int g = 0, f = 0; g < m; g++)
    {
        if (arr[g] != arr[f])
        {

            num = arr[g];
            v += 1;
            // break;
        }
    }
    //fazer o metodo de lista e colocar funções aqui!   
    cout << "n repetidos: " << v << " " << num << endl;

    // int result = v - m;

    total = 0;
    //total = new_num - num;
    cout << "\n\n"
         << total << endl;
}

/*
#include<iostream>
using namespace std;
int main(){
for(int u=0;u<5;u++){
for(int h =0;h<5;h++){
cout<<u<<" "<<h<<endl;
}
}
}*/