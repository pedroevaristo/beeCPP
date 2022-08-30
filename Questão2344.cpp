#include <iostream>
#include <cstdlib>
//void status(int note);
using namespace std;

int main()
{
    int note, verify;
    cin >> note;
    
    if (note >= 86 && note <= 100)
    {
        cout<<"Note's status: A"<<endl;
        
    }
    if (note >= 61 && note <= 85)
    {
        cout<<"Note's status: B"<<endl;
        
    }
    if (note >= 36 && note <= 60)
    {
        cout<<"Note's status: C"<<endl;
        
    }
    if (note >= 1 && note <= 35)
    {
        cout<<"Note's status: D"<<endl;
        
    }
    else
    {
        cout<<"Note's status: E"<<endl;
    }
    
}

/*void status(int note)
{
    
}*/