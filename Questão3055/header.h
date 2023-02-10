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
    Slots *top;
    Slots *principle;
};

Stack *createStack();

int push(Stack *stack, Student pointer);

void removeOnePush(Stack *stack);

int lengthStack(Stack *stack);

void showTheStack(Stack *stack);

