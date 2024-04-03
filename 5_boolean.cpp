# include<iostream>
using namespace std;
int main()
{
    bool x = true; // In K&R C bool did not exist it used to be defined as #define TRUE 1. This was the only way to have bool in K&R C
    cout<<
        "x bool and it is "<<x<<endl; //Yes you can also write like this
}

// In C89 onwards bool could only be used by includeing stdbool.h in the program i.e. #include <stdbool.h>