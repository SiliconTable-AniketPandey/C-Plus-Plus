# include<iostream>
using namespace std;
int main()                  // in newer version of C++ main must return somthing so it cannot be void has it used to be before
{   // Being a multiple language programmer it is sometimes difficult for me to code in form than 2 languages on the same day
    int a,b,sum;
    cout<<"Enter two numbers"<<endl; // << is called the output streaming operator
    cin>>a>>b;                         // >> is called the input streaming operator
    sum = a+b;
    cout<<"Sum = "<<sum;
    return 0;  // not necessary here
}