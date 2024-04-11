# include <iostream>
using namespace std;
int main()
{
    const int N = 100; // A const variable must be initilised at the time of definition
    int m; // some garbage value in here
    int *p;

    p = &m; // p holds the address of m.
    *p = 0; // But now m holds 0 as it's value. Becuse p is pointing towrds m 
    cout <<"The value of m is  "<< m << endl;
    *p = 200;
    cout<<"Now the value of m is  "<< m << endl;

    // p = &N; A variable cannot hold the address of a const type.
    // *p = 800; Value of a const type cannot be changed 
    return 0; 

}



// Using  #define                                        Using const
//--------------------------------------------------------------------------
/**  Is not type safe                              * Has its type             
 * Replaced textually by CPP                       * Visible to the compiler
 * Cannot be watched in debugger                   * Can be watched in debugger
 * Evaluated as many times as replaced             * Evaluated only on initialization */