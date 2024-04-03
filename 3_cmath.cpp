#include <iostream> // In C hedders are included using .h hedder file in C++ .h is not used
#include <cmath>    // In C is used to be math.h but in C++ it is cmath and so is cstdio and so on
using namespace std; //We use this to tell the compiler that hey everything i use here will be from standard namespace
int main()           // In C all names are global but in C++ all names comes under std namespace
{
    double x;
    cout<<"Enter a number to find square root"<<endl;  //so here cout actually is std::cout but we dont haive to expectily write it again and again because we already espicified that we are using namespace std
    cin>>x;                                            // actually means std::cin and same is for std::endl
    double sqr_x = sqrt(x);                            // Yes you can decleare variables anywhere inside main
    cout<<"Squre root of "<<x<<" is "<<sqr_x;          // Normally in C printf give precision upto 6 decimals but in C++ it gives upto 5 only
    return 0;
}
// Some compilers do not error out .h in C++ (In old compilers mostly)
// using iostream.h is disastrous as it compromises the security of the program as it will come uder global namespace 