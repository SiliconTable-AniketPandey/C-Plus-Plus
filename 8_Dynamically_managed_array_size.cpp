// Array resize
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr; // Default size
    cout<<"Enter the number of elements"<<endl;
    int count,sum=0;
    cin>>count;
    arr.resize(count); // Resize according to the count
    for( int i =0;i<=count;i++)
    {
        arr[i] = i;
        sum += i;
    }
    cout<<"Sum of array is "<<sum<<endl;
} 
