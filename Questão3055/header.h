struct Student
{
    char shift[50];
    char name[50];

    /*------------*/

    int grade;
    int media;

};

struct information
{
    int dados;
    struct information *next;
};

struct Stack{
    Stack *beginng;
    Stack *final;
};

Stack *createStack();

int push(Stack *stack, Student pointer);
