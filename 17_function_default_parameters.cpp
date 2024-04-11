# include<iostream>
using namespace std;

int Add(int a = 0 , int b = 0)
{
    return a+b;
}

int Substraction(int c = 0 , int d = 0) // make a habit to make functions with default parameters when ever parameters are required
{
    return c-d;
}


int main(){ int x = 5 , y = 5 , z;
    z = Add(x,y);
    cout<<"SUM: "<<z<<endl;

    z = Substraction(x,y);
    cout<<"SUBSTRACTION: "<<z<<endl;

    z = Add(); // parameters not apssed default values wiil be used
    cout<<"SUM: "<<z<<endl; 
    return 0;

    z = Substraction(y); // only one parameter passed y will be taken as default value
    cout<<"SUBSTRACTION: "<<z<<endl;
}