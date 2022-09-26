#include <iostream>
#include <cstdlib>
using namespace std;
int function(int choice);
int main()
{
    int choice, atribute;
    atribute = 0;

    do
    {
        cout << "escolha quais dos numeros abaixo para realizar uma pesquisa sobre combustiveis: \n1. Alcool;\n2. gasolina;\n3. Diesel;\n4. finalizar; " << endl;
        atribute = 0;
        cin >> choice;

        while (choice > 4)
        {

            cout << "digite novamente, nao existe essa opcao: \n";
            cin >> choice;
        }
        // função
        function(choice);
    } while (choice != 4);
}

// funções
int function(int choice)
{
    int count1 = 0, count2 =0, count3 =0;
    switch (choice)
    {
    case 1:
        count1+=1;
        break;

    case 2:
        count2+=1;
        break;
    case 3:
        count3+=1;
        break;
    }
}