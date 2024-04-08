#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int i, int j) {
    return (i < j); // Sort in ascending order;   < for ascending oredr and > for descending order
}

int main() 
{
    vector<int> arr;
    int n, res;
    cout << "Enter the number of elements you want to enter: ";
    cin >> n;
    
    arr.resize(n); // Resize vector to hold n elements
    
    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> res;
        arr[i] = res;
    }
    // Quick Sort the array
    // Sort the vector in descending order using custom comparison function
    sort(arr.begin(), arr.end(), compare);

    // Output the sorted array
    cout << "Sorted array in descending order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << i << " = " << arr[i] << endl;
    }

    return 0;
}

/**
 * 
 * 
 * sort: This is the standard library function std::sort from the <algorithm> header in C++. It is used to sort elements in a range defined by iterators.

    arr.begin() and arr.end(): These are iterators that define the range of elements to be sorted. 
    arr.begin() points to the beginning (first element) of the vector arr, and arr.end() points to one past the last element of the vector arr. 
    This range [arr.begin(), arr.end()) includes all elements in the vector arr.

    compare: This is a custom comparison function passed as the third argument to std::sort. 
    The compare function is used to determine the order of elements during sorting. The function compare(i, j) should return false if i should go before j in the sorted sequence, and true otherwise.

 * 
 */