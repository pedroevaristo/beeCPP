#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void conditionsGrades(float resultExam);

int main()
{
    float numbersExam[4];
    int gradesWeighted[4] = {2, 3, 4, 1};
    int loopLearnerExams;

    cout << "Digite 4 notas do aluno, abaixo:\n";

    for (loopLearnerExams = 0; loopLearnerExams < 4; loopLearnerExams++)
    {
        cin >> loopLearnerExams[numbersExam];
    }

    float totalAccumulated = 0;
    float totalResultStudent = 0;
    int totalGradeWeighted = 0;
    int loopWhile = 0;

    while (loopWhile < 4)
    {
        totalAccumulated = (numbersExam[loopWhile] * gradesWeighted[loopWhile]);
        totalResultStudent += totalAccumulated;

        totalGradeWeighted += gradesWeighted[loopWhile];
        loopWhile++;
    }
    conditionsGrades(totalResultStudent / totalGradeWeighted);
}

float newGrade = 0, newResultExam = 0;

void conditionsGrades(float resultExam)
{

    if (resultExam >= 7.0)
    {
        cout << "Aluno Aprovado" << endl;
    }
    if (resultExam < 7.0 && resultExam >= 5)
    {
        cout << "Aluno em Exame" << endl;
        cout << "Digite novamente a nota:\n";
        cin >> newGrade;

        resultExam =(resultExam + newGrade)/2;

        if (resultExam >= 5.0)
        {
            cout<<"Aprovado \n Media final: "<<resultExam<<endl;
        }
        else{
            cout<<"Reprovado \n Media final: "<<resultExam<<endl;
        }
    }
    else
    {
        cout<<"Reprovado "<<resultExam<<endl;
    }
}
