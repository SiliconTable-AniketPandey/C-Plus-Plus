# include<iostream>
using namespace std;
int main()
{
    long long n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    long long rem;
    while(n>0)
    {
        rem = n % 10;
        cout<<rem<<endl;
        n = n / 10;
    }

}