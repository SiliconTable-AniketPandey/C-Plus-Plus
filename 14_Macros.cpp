# include<iostream>
# define TWO 2  // # define is a preprocessor directive and TWO is a macro not a variable. Manifest Constant or Macros is a textual replacement for variables.
# define PI 3.141 // Same is the case with pi

using namespace std;

int main()

{   
    float r;
    cout<<"Enter the radius of circle"<<endl;
    cin>>r;
    cout<<"The area of circle is "<<PI*r*r<<endl; // The compiler does not know what PI is it sees it as cout<<"Enter the radius of circle is "<<3.141 * r * r<<endl;
    cout<<"The perimeter of teh circle is "<<TWO*PI*r<<endl; // The compiler does not know what TWO and PI are it sees it as cout<<"Enter the perimeter of teh circle is 2 * 3.141 * r * r<<endl;
    return 0;
}

/**
 * 
 * However, it's important to note that macros are simply textual replacements. TWO doesn't behave exactly like a variable. 
 * For example, you cannot perform arithmetic operations on TWO itself.
 * 
 * When I said you cannot perform arithmetic operations on TWO itself, I meant that you cannot directly use TWO in an expression like 3 + TWO or TWO * TWO. 
 * The preprocessor replaces TWO with its value (2) before the compiler even sees the code. So, the expression 3 + TWO would be treated as 3 + 2 by the compiler.

    Here's why arithmetic on TWO itself isn't allowed:

    Macros are textual replacements: The preprocessor simply finds all occurrences of TWO and substitutes the value 2 in the code. It doesn't perform any evaluation or calculations on TWO itself.
    Macros expand before compilation: The preprocessor processing happens before the actual compilation stage. So, by the time the compiler sees the code, TWO has already been replaced with 2.

 * 
 */