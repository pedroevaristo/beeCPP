#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // float takeNumbers[3];
    float storeNumbers[3];

    int loopToTakeInfor = 0;

    do
    {
        cin >> storeNumbers[loopToTakeInfor];

        loopToTakeInfor += 1;
    } while (loopToTakeInfor < 3);

    int auxliar = 0;
    for (int loopOrganising1 = 0; loopOrganising1 < 3; loopOrganising1++)
    {
        for (int loopOrganising2 = 0; loopOrganising2 < 3; loopOrganising2++)
        {
            if (storeNumbers[loopOrganising1] > storeNumbers[loopOrganising2])
            {

                
            }
        }
    }
}