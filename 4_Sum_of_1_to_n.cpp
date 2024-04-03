# include<iostream>
using namespace std;
int main()
{   int a;
    double sum=0;       // a can be a big number so sum can also be
    cout<<"Enter a number upto which sum is to be calculated"<<endl;
    cin>>a;
    for(int i =0;i<=a;i++) //Local declearation
    {                      // this local declearation was not possible before C89
        sum += i;
    }

    cout<<"Sum of "<<a<<" numbers is "<<sum<<endl;
} 