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
        stack->begin = NULL;
        stack->top = NULL;
    }
    else
    {
        cout << "Error creating a stack!" << endl;
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
        push->data = pointer;
        push->next = NULL;
        if (stack->top == NULL)
        {
            stack->begin = push;
        }
        else
        {
            stack->top->next = push;
        }
        stack->top = push;
        return 1;
    }
}

/*--------------*/

void calculateTheGrades(Stack *stack, Student pointer)
{
    Slots *calculate = stack->top;

    /* while (calculate->next != NULL)
     {*/
    calculate->data.grade2 = (pointer.grade1 + pointer.average) / 2;
    
}
/*------------*/

void removeOnePush(Stack *stack)
{

    int length = 0;

    length = lengthStack(stack);

    if (length == 1)
    {
        free(stack->begin);
        stack->begin = NULL;
        stack->top = NULL;
    }
    else if (length >= 2)
    {

        Slots *remove = stack->begin;

        while (remove->next->next != NULL)
        {
            remove = remove->next;
        }

        free(remove->next);
        remove->next = NULL;
        stack->top = remove;
    }
}

/*-------*/
int lengthStack(Stack *stack)
{
    if (stack == NULL)
    {
        cout << "Stack is empty" << endl;
        return 0;
    }
    else
    {
        int countStack = 0;
        Slots *length = stack->begin;

        while (length != NULL)
        {
            countStack += 1;

            length = length->next;
        }
        return countStack;
    }
}

/*----------*/

void showTheStack(Stack *stack)
{
    system("cls");
    if (statusStack(stack))
    {

        cout << "Stack is empty" << endl;
    }
    else
    {
        int count = 0;

        Slots *status = stack->begin;
        while (status != NULL)
        {
            cout<<"\n";
            cout << "position: " << count + 1 << " stack" << endl;

            cout << "name: " << status->data.name << endl;

            cout << "The student's grade 1 : " << status->data.grade1 << endl;

            cout<<"The student's average exam: "<< status->data.average<<endl;

            cout<<"The student's grade 2: "<< status->data.grade2 <<endl;

            if(status->data.grade2 >= 50){
                cout<<"Student approved"<<endl;
            }else{
                cout<<"Student reproved"<<endl;
            }
            status = status->next;

            count += 1;
        }
    }
}

int statusStack(Stack *stack)
{
    if (stack == NULL || stack->begin == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/*-------------*/

void clearStackAndExit(Stack *stack)
{
    if (stack != NULL)
    {
        Slots *exclude;

        while (stack->begin != NULL)
        {
            exclude = stack->begin;

            stack->begin = stack->begin->next;
            free(exclude);
        }
        free(stack);
        system("cls");
        exit(0);
    }
}
