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

int push(Stack *stack, Student pointer)
{
    if (stack == NULL)
    {
        return 0;
    }
    else
    {
        Slots *push = (Slots *)malloc(sizeof(Slots));
        if (push == NULL)
        {
            return 0;
        }
        push->dados = pointer;
        push->next = NULL;
        if (stack->final == NULL)
        {
            stack->beginng = push;
        }
        else{
            stack->final->next = push;
        }
        stack->final = push;
        return 1;
    }
}
