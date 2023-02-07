struct Student
{
    char shift[50];
    char name[50];

    /*------------*/

    float grade;
    float media;
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
