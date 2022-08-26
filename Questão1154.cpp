#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    float quant, collect = 0, sum = 0, total = 0;
    while (quant >= 0)
    {
        cin >> quant;
        if (quant >= 0)
        {
            sum += 1;
            collect += quant;
        }
    }
    total = collect / sum;
    cout << total << endl;
}
