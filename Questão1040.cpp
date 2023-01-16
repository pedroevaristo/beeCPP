#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

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

    /* for (int lopp = 0; lopp < 4; lopp++)
     {
         cout << numbersExam[lopp] << endl;
     }*/

    float totalAccumulated = 0;
    float totalResultStudent = 0;
    int totalGradeWeighted = 0;
    int loopWhile = 0;

    // totalResultStudent = ((2*)+(3*)+(4*)+(1*)/4);

    while (loopWhile < 4)
    {
        totalAccumulated = (numbersExam[loopWhile] * gradesWeighted[loopWhile]);
        totalResultStudent += totalAccumulated;

        totalGradeWeighted += gradesWeighted[loopWhile];
        loopWhile++;
    }
    cout << totalResultStudent / totalGradeWeighted << endl;
}
//falta pegar o numeros totais e colocar em condições e entre elas, colocar 