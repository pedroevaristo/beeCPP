#include <iostream>
#include <cstdlib>
using namespace std;
int function(int choice);

int count1 = 0, count2 = 0, count3 = 0;

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
        int receivenumbers = function(choice);
    
    } while (choice != 4);

    cout<<"MUITO OBRIGADO"<<endl;
    cout<<" - Alcool: "<<count1<<endl;
    cout<<" - Gasolina: "<<count2<<endl;
    cout<<" - Diesel: "<<count3<<endl;
}

// funções
int function(int choice)
{
    switch (choice)
    {
    case 1:
        return count1 += 1;
        break;
    case 2:
        return count2 += 1;
        break;
    case 3:
        return count3 += 1;
        break;
    }
}