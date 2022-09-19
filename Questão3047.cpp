#include <iostream>
#include <cstdlib>
#include<cmath>
using namespace std;

int main()
{
    int vet[3], insert, count;
    cout << "Digite a idade, respectivamente, Dona Monica, filho1, filho 2, para descobrir a idade do terceiro" << endl;
    count = 0, insert = 0;
    
    do{
        count += 1;
        cout << count << ": ";
        cin >> vet[insert];
        while (vet[1] == vet[2])
        {
            cout << "Digite novamente" << endl;
            cin >> vet[insert];
        }
        
        insert += 1;
    } while (insert < 3);

    double ageTotalChild = 0, thirdChildAge = 0;

    ageTotalChild = vet[1] + vet[2];

    thirdChildAge = ageTotalChild - vet[0];

    cout << "A terceira crianca tem " << abs(thirdChildAge) << " de idade" << endl;
}