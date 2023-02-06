struct Aluno
{
    int age;
    char name[50];

    /*------------*/

    float nota;
    float media;
};

struct pilha
{
    int dados;
    struct pilha *proximo;
};