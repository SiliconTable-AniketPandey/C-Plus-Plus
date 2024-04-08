#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int i, int j) {
    return (i < j); // Sort in ascending order;   < for ascending oredr and > for descending order
}

int main() {
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

    // Sort the vector in descending order using custom comparison function
    sort(arr.begin(), arr.end(), compare);

    // Output the sorted array
    cout << "Sorted array in descending order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << i << " = " << arr[i] << endl;
    }

    return 0;
}
