# include <iostream>

using namespace std;

char some_function(int x) { return static_cast<char>(x); }
int some_function(double x , double y = 9347.9734) { return static_cast<int>(x);};
int main()
{

    float z = some_function(565);

    cout<<z<<endl;
    
    cout<<some_function(45)<<endl;
    
    cout<<some_function(45.36)<<endl;

    // cout<<some_function(45.36f, 5345.41)<<endl;
    
    /**
     * 
     * Function Call Ambiguity:

        The function call some_function(45.36f, 5345.41) causes ambiguity because the second version of some_function is defined with default parameter y = 9347.9734. 
        Providing a second argument (5465) during the call makes it unclear which function overload should be used.
     * 
     */
}