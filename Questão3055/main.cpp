#include <iostream>
#include <cstdlib>
#include <cstring>
#include <istream>


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

        cout << "Type between the options:\n 1. Enter the student's information\n 2. Take a student's grade\n 3. Print the information\n 4. Clear Memory and exit" << endl;
        cin >> choice;

        switch (choice)
        {
            
            fflush(stdin);
        case 1:
            cout << "Student's name: " << endl;
            cin.getline(pointer.name, 50);

            cout << "Student's first exam:" << endl;
            cin >> pointer.grade1;

            cout << "Student's averege total: " << endl;
            cin >> pointer.average;

            cout<<"What's the shift of student ?"<<endl;

            cin.getline(pointer.shift, 50);
            
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