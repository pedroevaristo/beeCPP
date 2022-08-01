#include <iostream>
#include <cstdlib>
void function(int d);
using namespace std;

int main()
{
    int d;
    cin >> d;
    function(d);
}

void function(int d)
{
    if (d <= 800)
    {
        cout << " valor da arremesso: 1 ponto" << endl;
    }
    if (d > 800 && d <= 1400)
    {
        cout << " valor da arremesso: 2 ponto" << endl;
    }
    if(d > 1400 && d <= 2000){
        cout << " valor da arremesso: 3 ponto" << endl;
    }
}