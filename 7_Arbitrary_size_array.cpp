/**
 *  Arbitrary Size Array
 * 
 * This can be implemented in C(C++) in the following ways:
 * case 1 : Declearing a large array with size grater than the size given by users in all (most) of the cases
 *          * Hard code the mazimum size in code
 *          * Declare a manifest constant for the maximum size
 * 
 * case 2: Using malloc (new[]) to dynamically allocate space at run-time for the arry  
 *     
  */

 # include <iostream>
 # include <vector>
 using namespace std;
 #define MAX 100

 int main()
 {
    vector<int> arr(MAX); // Vector ; Define-time size
    cout<< "Enter the no. of elements"<<endl;
    int count, sum = 0;
    cin >> count;

    for(int i = 0 ; i < count; i++)
    {
        arr[i] = i;
        sum += i;
    }
    
    cout<<"Sum of array is "<< sum<<endl;
 }

 /**
  * 
  * The declaration vector<int> arr(MAX); in C++ is different from declaring an array in several key ways:

    Dynamic Size:

        In the case of vector<int> arr(MAX);, arr is a std::vector that can dynamically resize itself. 
        The MAX value is used to initialize the vector with a capacity of MAX elements, but the vector can grow or shrink dynamically at runtime.
        You can add elements to it beyond its initial capacity without worrying about fixed size limitations.

    Vector Capacity vs. Size:

        In the provided program, vector<int> arr(MAX); declares a vector with an initial capacity of MAX (which is 100 in your program). 
        This means the vector can initially hold up to 100 elements efficiently without resizing. However, the vector's actual size is initially 0.
        When you use arr[i] = i; inside the loop and attempt to access elements beyond the vector's current size (which is 0 initially), it can lead to undefined behavior or runtime errors.

    In summary, using a std::vector is often preferred over raw arrays (int arr[MAX];) in C++ due to its flexibility and safety features. 
    However, both have their own use cases depending on the requirements of the program.

  * 
  */