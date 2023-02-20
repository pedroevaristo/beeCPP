#include <iostream>
#include <cstdlib>
#include <cstring>


using namespace std;

/*Tenho que saber usar struct para armazenar as informações e mostrar-las*/
int main()
{
    int count = 0;
    int numbers[3];
    int *pont;
    do
    {
        cin >>numbers[count];
        pont = &numbers[count];
        count++;

    } while (count < 3);

    for(int i = 0; i < 3; i++){
        
    }

}