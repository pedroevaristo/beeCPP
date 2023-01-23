#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    float takeNumbers[3];
    float storeNumbers[3];

    int loopToTakeInfor = 0;

    do
    {
        cin >> storeNumbers[loopToTakeInfor];
        takeNumbers[loopToTakeInfor] = storeNumbers[loopToTakeInfor];
        loopToTakeInfor += 1;
    } while (loopToTakeInfor < 3);

    int auxiliar = 0;
    for (int loopOrganising1 = 0; loopOrganising1 < 3; loopOrganising1++)
    {
        for (int loopOrganising2 = 0; loopOrganising2 < 3; loopOrganising2++)
        {
            if (storeNumbers[loopOrganising1] < storeNumbers[loopOrganising2])
            {
                auxiliar = storeNumbers[loopOrganising1];
                storeNumbers[loopOrganising1] = storeNumbers[loopOrganising2];
                storeNumbers[loopOrganising2] = auxiliar;
            }
        }
    }
    cout << "\n"
         << endl;
    int loopWhile = 0;
    while (loopWhile < 3)
    {

        cout << storeNumbers[loopWhile] << endl;
        loopWhile += 1;
    }
    cout << "\n"
         << endl;
    for (int loopFor = 0; loopFor < 3; loopFor++)
    {
        cout << takeNumbers[loopFor] << endl;
    }
}