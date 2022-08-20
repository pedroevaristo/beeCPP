#include <iostream>
#include <cstdlib>

void verifynumber(int);

using namespace std;

int main()
{
    int loop, amount;

    cin >> amount;

    int input[amount];

    loop = 0;
    while (loop < amount)
    {
        int loop1 = 0, aux;
        do
        {
            cin >> input[loop1];

            loop1 += 1;

        } while (loop1 < 2);
        /*aux = 0;
        while (input[0] > input[1])
        {
            aux = input[0];
            input[0] = input[1];
            input[1] = aux;
        }*/
    
        for (int check = input[0]; check < amount; check++)//fazer de alguma forma que ele comece a conta apartir de 4 a 5 e dizer que o resultado é 0
        {
            int total = input[0]+input[1];
            cout<<total<<endl;
        }
        loop += 1;
    }
}
/*
aux+=1;
if(input[amount] == input[amount]||aux <= 1 ){
        cout<<input[amount]<<" "<<input[amount]<<"result: 0"<<endl;
        break
       }

 */
/* do
         {
             cin >> input[loop];
             loop += 1;
         } while (loop < input[amount]);*/