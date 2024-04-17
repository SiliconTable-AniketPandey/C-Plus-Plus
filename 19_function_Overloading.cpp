/*
*Function overloading in C++ allows multiple functions within the same scope to have the same name but different parameter lists. 
 * This enables you to use the same function name to perform different tasks based on the type or number of arguments passed to the function. 
 * The compiler determines which overloaded function to call based on the arguments provided during the function call.
 * This is also called as static polymorphism
 * 

Here's an example to demonstrate function overloading in C++: */

# include <iostream>
using namespace std;

#define PI 3.14
double calculate(double length = 0, double breadth = 0) { return length * breadth; } // same name/scope of the function is being used for all the other functions too, but the parameters have to be different from each other
long calculate(long side = 0) { return side*side ;}
float calculate(float radius = 0) { return PI*radius*radius; }

int main()
{
    double length_rec = 546534.54, breadth_rec = 534653;
    long side_sqr = 534534.5435;
    float radius_sqr = 5334.5435;
    double area_rec = calculate(length_rec,breadth_rec);
    cout<<"Area of rectangle "<<area_rec<<endl;

    cout<<"Area of square "<<calculate(side_sqr)<<endl;
    cout<<"Area of circle "<<calculate(radius_sqr)<<endl;

}
/**
 * The compiler determines which overloaded function to invoke based on the number and type of arguments provided. 
 * This makes the code more flexible and readable, allowing us to use the same function name for different purposes depending on the context.
 */