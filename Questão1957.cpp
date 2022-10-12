#include <iostream>
#include <cstdlib>
#include <cmath>
void scanNumber(int receiveNumber);
int clearArrayBase(int arrayBase[], int *sum);
using namespace std;

int main()
{
    int receiveNumber;
    int resultDivision = 0, resultRestDivision = 0;

    cout << "Digite um valor decimal para converter em Hexadecimal: " << endl;

    cin >> receiveNumber;

    if (receiveNumber >= 10 && receiveNumber <= 15)
    {
        scanNumber(receiveNumber);
    }

    else
    {

        int sum = 0;

        while (receiveNumber > 16)
        {
            int arrayBase[sum];

            cout << receiveNumber << "|_16_" << endl;

            resultRestDivision = receiveNumber % 16;
            resultDivision = receiveNumber / 16; // dividido pelo hexadecimal
            arrayBase[sum] = resultRestDivision;

            receiveNumber = resultDivision;

            cout << resultRestDivision << "  " << resultDivision << "\n"
                 << endl;
            cout << "\n"
                 << arrayBase[sum] << endl;
            sum += 1;
        }
       
    }
    // colocar aqui a função de limpar o array
    //  cout << "Aqui o resultado: \n"<< endl;
    //  cout << resultDivision << resultRestDivision << endl;
}
void scanNumber(int receiveNumber)
{
    switch (receiveNumber)
    {
    case 10:
        cout << receiveNumber << "== A" << endl;
        break;

    case 11:
        cout << receiveNumber << "== B" << endl;
        break;

    case 12:
        cout << receiveNumber << "== C" << endl;
        break;

    case 13:
        cout << receiveNumber << "== D" << endl;
        break;

    case 14:
        cout << receiveNumber << "== E" << endl;
        break;

    case 15:
        cout << receiveNumber << "== F" << endl;
        break;
    }
}

int clearArrayBase(int arrayBase[], int *sum)
{
}