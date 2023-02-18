struct Student
{
    char shift[50];
    char name[50];
    char statusGrade[20];

    /*------------*/

    int grade1;
    int average;
    int grade2;
};

struct Slots
{
    Student data;//Struct aninhadas
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

void calculateTheGrades(Stack *stack, Student pointer);

