#include<bits/stdc++.h>

using namespace std;

int main(){
int a, b, c, maiorab, m;

    cin>>a>>b>>c;
    maiorab = ((a+b+ abs(a-b))/2);
    m = ((maiorab + c+ abs(maiorab-c)) /2);
    cout<< m <<endl;

}