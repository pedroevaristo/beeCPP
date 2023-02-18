struct head{
    int numbers[3];
    float pi = 3.141592;
    float result;
    int *point;
};
struct infor{
    head data;
    infor *next;
};
struct data{
    infor *begin;
    infor *top;
};


void creteSpace();

void calculation();
