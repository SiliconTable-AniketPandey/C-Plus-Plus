# include <iostream>
using namespace std;
int main()
{
    short age[4];

    age[0] = 1;
    age[1] = 2;
    age[2] = 3;
    age[3] = 4;

    cout<<"Array = "<<age<<endl; // Will give memory address
    cout<<"Array = "<<age[0]<<" "<<age[1]<<" "<<age[2]<<" "<<age[3]<<endl;

    cout<<"Garbage value = "<<age[4]<<endl; // Will give garbage value
}

// In C++, arrays decay into pointers when passed to cout, so it will not give you the content of the array but rather the address of its first element.
// However, it's worth noting that printing the memory address of an array in this way isn't particularly meaningful or useful. 
// If you want to output the elements of the array, you would need to loop through the array and print each element individually, or use some other method to display the array contents.