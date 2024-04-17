# include <iostream>
using namespace std;

void some_function(int x){
    cout << x << endl;
    x++;
    cout<<"Function of x = " << x << endl;
}

void some_other_function(int& x)
{
    cout << x << endl;
    x++;
    cout<<"Function of x = " << x << endl;
}

int main()
{
    int x = 100;
    some_function(x); // Pass by value
    some_other_function(x); // Pass by reference
    return 0;
}