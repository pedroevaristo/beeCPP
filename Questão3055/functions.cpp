#include <iostream>
#include <cstdlib>
#include <cstring>

#include "header.h"
using namespace std;

Stack *createStack()
{

    Stack *stack = (Stack *)malloc(sizeof(Stack));

    if (stack != NULL)
    {
        stack->top = NULL;
        stack->principle = NULL;
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
        if (stack->principle == NULL)
        {
            stack->top = push;
        }
        else
        {
            stack->principle->next = push;
        }
        stack->principle = push;
        return 1;
    }
}

/*--------------*/

void removeOnePush(Stack *stack)
{

    int length = 0;

    length = lengthStack(stack);

    if(length == 1){
        free(stack->top);
        stack->top =NULL;
        stack->principle = NULL;

    }
    else if(length >= 2){

        Slots *remove = stack->top;

        while(remove->next->next == NULL){
            remove = remove->next;
        }

        free(remove->next);
        remove->next = NULL;
        stack->principle = remove;

    }
}

/*-------*/
int lengthStack(Stack *stack)
{
    if (stack == NULL)
    {
        cout << "stack is empty" << endl;
        return 0;
    }
    else
    {
        int countStack = 0;
        Slots *length = stack->top;

        while (length != NULL)
        {
            countStack+=1;

            length = length->next;
        }
        return countStack;
    }
}

/*----------*/

void showTheStack(Stack *stack){



}