struct Student
{
    char shift[50];
    char name[50];

    /*------------*/

    int grade;
    int media;

};

struct Slots
{
    Student dados;
    Slots *next;
};

struct Stack{
    Slots *beginng;
    Slots *final;
};

Stack *createStack();

int push(Stack *stack, Student pointer);
