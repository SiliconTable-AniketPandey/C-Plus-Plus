#include<iostream>
using namespace std;


void CheckIfArrayOutOfBounds( int a[100], int b, int size){
    try{
        if(b > -1 && b < size)
        {
            cout<< "Number = "<<a[b]<<endl;
        }
        else{
            throw(b);
        }
    }
    catch(int e){
        cout<< "Array out of bound"<<endl;
    }
    
    
}

int main(){

    int n, pos;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter "<<n<<" numbers into array"<<endl;
    int arr[n];
    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the position to be found";
    cin>>pos;

    CheckIfArrayOutOfBounds(arr,pos, n);
    return 0;
}