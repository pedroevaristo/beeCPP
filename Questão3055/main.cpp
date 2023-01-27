#include <iostream>
#include <cstdlib>
#include "header.h"

using namespace std;

void receiveInput();

int main()
{

    student inforPersonalStudent;
    int quantityStudent;

    cout << "Digite a(s) nota(s) do(s) aluno(s):" << endl;

    cin >> quantityStudent;

    int loopWhile = 0;

    do
    {
        // receiveInput();
        cout << "Digite o nome do aluno: ";
        cin >> inforPersonalStudent.nameStudent;

        cout << "A nota 1: ";
        cin >> inforPersonalStudent.gradeStudent;

        cout << "digite a media: ";
        cin >> inforPersonalStudent.mediaStudnet;

        loopWhile++;
    } while (loopWhile < quantityStudent);

    // cout<<inforPersonalStudent.nameStudent<<endl;
}
