#include "header.h"
#include <iostream>
#include <cstdlib>
#include <cstring>

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

    stack = createStack();

    do
    {

        cout << "Type between the options:\n 1. Enter the student's information\n 2. Take a student's grade\n 3. Print the information\n 4. Clear Memory and exit" << endl;
        cin >> choice;

        switch (choice)
        {

        case 1:
            fflush(stdin); // isso tem que estar dentro do case ou qualquer caso for colocar
            cout << "Student's name: " << endl;

            cin.getline(pointer.name, 50);

            cout << "Student's first exam:" << endl;
            cin >> pointer.grade1; // aqui toda vez que teno usar getline, ele passa direto para o proximo.

            cout << "Student's averege total: " << endl;
            cin >> pointer.average;
            
            fflush(stdin);
            cout << "What's the shift of student ?" << endl;
            cin.getline(pointer.shift, 20);

            push(stack, pointer);
            calculateTheGrades(stack, pointer);

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