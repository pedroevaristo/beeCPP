#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
int R;
float volume, pi = 3.14159;
cin>> R;
volume = ((4 * pi * (R*R*R))/3);

cout<<"VOLUME = "<< fixed << setprecision(3) <<volume <<endl;
return 0;
}