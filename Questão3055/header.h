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
    Student data;
    Slots *next;
};

struct Stack{
    Slots *begin;
    Slots *top;
};

Stack *createStack();

int push(Stack *stack, Student pointer);

void removeOnePush(Stack *stack);

int lengthStack(Stack *stack);

void showTheStack(Stack *stack);
int statusStack(Stack *stack);

 void clearStackAndExit(Stack *stack);

