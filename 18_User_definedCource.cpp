# include<iostream>
# include "18_User_definedhedderfile.h" // The hedder file that we created
using namespace std;

void function1(int i, double d, char c) {cout<<i<<" "<<d<<" "<<c<<endl;}
void function2(int e, double l, char h){ cout<<e<<" "<<l<<" "<<h<<endl;}
int main()
{   int i = 100; double o = 200; char w = 'A';
    function1(i);
    function2(i,o,w);
}