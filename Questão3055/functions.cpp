#include <iostream>
#include <cstdlib>
#include <cstring>

#include "header.h";
using namespace std;

Stack *createStack()
{

    Stack *stack = (Stack *)malloc(sizeof(Stack));

    if (stack != NULL)
    {
        stack->beginng = NULL;
        stack->final = NULL;
    }
    else
    {
        cout << "Erro ao criar a Pilha" << endl;
    }
    return stack;
}

