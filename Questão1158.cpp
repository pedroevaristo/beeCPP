#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int quantid, array[2], loop;

    cin >> quantid;

    loop = 0;
    while (loop < quantid)
    {
        int input = 0, total = 0;

        do
        {

            cin >> array[input];

            input += 1;

        } while (input < 2);

        total = array[0] + array[1];

        int aux = 0, resultsum = 0;

        for (int sum = 0; sum < total; sum++)
        {
            if (array[0] % 2 == 1)
            {
                cout << array[0] << endl;
                resultsum += array[0];
                aux += 1;
            }
            array[0] += 1;

            if (aux == array[1])
            {
                break;
            }            
        }
        cout <<resultsum<<endl;
         loop += 1;
    }
}