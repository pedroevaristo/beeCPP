#include <iostream>
#include <cstdlib>
#include<cstring>


#include "header.h"

using namespace std;

int main()
{ 
    /*
    empilhar
    desimpilhar
    imprimir
    e esvaziar espaço da memória
    */

    Student pointer;
    Stack *stack;
    int choice;
    int aux = 0;


   stack = createStack();
    
    do
    {

        cout << "Digite entre as opcoes:\n 1. colocar as informações do aluno\n 2. Tirar a nota de um aluno \n 3. Imprimir as informacoes \n 4. limpar a memória e sair" << endl;
        cin >> choice;

        switch (choice)
        {
             fflush(stdin);


        case 1:
            cout << "Student's name: " << endl;
            cin.getline(pointer.name, 50);

            cout << "Student grade 1:" << endl;
            cin >> pointer.grade;

            cout << "Media total" << endl;
            cin >> pointer.media;

            cout<<"What's shift of him/her?"<<endl;

            cin.getline(pointer.shift, 50);
            
            push(stack, pointer);


            break;
            
        case 2:
            removeOnePush(stack);

            break;
        case 3:
            showTheStack(stack);
            break;
        case 4:
            clearStackAndExit(stack);
            break;
        }
    } while (choice != 0);
}