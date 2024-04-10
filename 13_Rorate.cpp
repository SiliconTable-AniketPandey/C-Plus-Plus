#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    int n, res;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    arr.resize(n);
    cout<<"Enter "<<n<<" elements into the array"<<endl;
    for(int i =0 ; i < n ; i++)
    {
        cin>>res;
        arr[i] = res;
    }                                                              //    [0] [1] [2] [3] [4] [5] [6] [7] [8] [9]
                        // will rotate from nth index i.e if arr contains 1,  2,  3,  4,  5,  6,  7,  8,  9, 10  it will rotate from till 5th index
    rotate(arr.begin(), arr.begin() + 5,arr.end()); // and the output will be  6 7 8 9 10 1 2 3 4 5

    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}