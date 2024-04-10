#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// This program demonstrates use of prebuilt binary_search function in the algorithm library 

bool compare(int i , int j)
{
   return (i < j);
}

int main()
{
    vector<int> arr;
    int n,res;
    cout<<"Enter the number of elements you want to input."<<endl;   
    cin>>n;
    cout<<"Enter "<<n<<" elements now"<<endl;
    arr.resize(n);
    for(int i = 0; i < n; i++)
    {   
        cin>>res;
        arr[i] = res;
    }

    sort(arr.begin(), arr.end(), compare);

    cout<<"Enter the number you ewant to find."<<endl;
    cin>>res;

    if (binary_search(arr.begin(),arr.end(),res)){
        cout<<"Found "<<res<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}