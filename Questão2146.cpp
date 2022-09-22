#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int array[1], loop;
    loop = 0;
    do
    {
        cin >> array[0];
        while (array[0] < 1001)
        {
            cout << "Digite novamente" << endl;
            cin >> array[0];
        }
        int total = 0;
        //cout<<array[1]<<endl;
        total = abs((array[0]- 1));
        cout << total << endl;
        array[0] = 0;
        loop += 1;
    } while (loop > 1);
} 