#include <iostream>
#include <cstdlib>
#include <cmath>
void scanNumber(int receiveNumber);

void scanNumberArray(int inforRecevied[], int *pontShow);

// int clearArrayBase(int arrayBase[], int *sum);

using namespace std;
// fazer com tad é melhor
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

        int sum = 0, inforRecevied[sum];

        while (receiveNumber > 16)
        {
            int arrayBase[sum];

            cout << receiveNumber << "|_16_" << endl;

            resultRestDivision = receiveNumber % 16;
            resultDivision = receiveNumber / 16; // dividido pelo hexadecimal
            arrayBase[sum] = resultRestDivision;
            inforRecevied[sum] = arrayBase[sum];

            receiveNumber = resultDivision;

            cout << resultRestDivision << "  " << resultDivision << "\n"
                 << endl;
            /*cout << "\n aqui o numero: "
                 << arrayBase[sum] << endl;*/
            sum += 1;
        }

       
        /*for (int i = 0; i < sum; i++)
        {
            cout << inforRecevied[i];
        }*/

        int auxliar = 0;
        for (int orderDecrease = 0; orderDecrease < sum; orderDecrease++)
        {
            for (int orderDecrease2 = 0; orderDecrease2 < sum; orderDecrease2++)
            {

                if (inforRecevied[orderDecrease] < inforRecevied[orderDecrease2])
                {
                    auxliar = inforRecevied[orderDecrease];
                    inforRecevied[orderDecrease] = inforRecevied[orderDecrease2];
                    inforRecevied[orderDecrease2] = auxliar;
                }
            }
        }
        cout<<"Resultado da conversao: \n";
        cout<<resultDivision<<endl;

        int show = 0;
        do
        {
            
            if (inforRecevied[show] >= 10 && inforRecevied[show] <= 15)
            {   
                int *pontShow = &show;
                scanNumberArray(inforRecevied, pontShow);
                //cout<<"result:"<<inforRecevied[show]<<endl;
            }
            else{
                cout << inforRecevied[show] << endl;
            }
            show += 1;

        } while (show < sum);

        
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
void scanNumberArray(int inforRecevied[], int *pontShow)
{
//   cout<<"passou pelo switch"<<endl;
    switch (inforRecevied[*pontShow])
    {
    case 10:
        cout << inforRecevied[*pontShow] << "== A" << endl;
        break;

    case 11:
        cout << inforRecevied[*pontShow] << "== B" << endl;
        break;

    case 12:
        cout << inforRecevied[*pontShow] << "== C" << endl;
        break;

    case 13:
        cout << inforRecevied[*pontShow] << "== D" << endl;
        break;

    case 14:
        cout << inforRecevied[*pontShow] << "== E" << endl;
        break;

    case 15:
        cout << inforRecevied[*pontShow] << "== F" << endl;
        break;
    }
}

/*int clearArrayBase(int arrayBase[], int *sum)
{
}*/