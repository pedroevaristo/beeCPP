#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num[2];
    for (int i = 0; i < 2; i++)
    {
        cin >> num[i];
        while(num[i] < 1){
            cout<<"digite novamente"<<endl;
            cin>>num[i];
        }
    }

     int total = num[0] % num[1];
     cout<<total<<endl;
}