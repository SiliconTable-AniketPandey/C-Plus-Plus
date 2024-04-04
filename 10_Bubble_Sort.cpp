# include <iostream>
# include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    int count,responce,temp;
    cout<<"Enter the number of elements you want to enter"<<endl;
    cin>>count;
    cout<<"Now enter "<<count<<" number of elements"<<endl;
    arr.resize(count);
    for(int i =0; i < count; i++)
    {
        cin>>responce;
        arr[i] = responce;
    }

    for(int j = 0; j < count-1; j++)
    {
        for(int i =0 ; i < count- j -1; i++)
        {
            if(arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }

    }
    cout<<"Elements in ascending order are :"<<endl;
    cout<<endl;
    for(int i = 0 ; i< count; i++)
    {
        cout<<arr[i]<<endl;
    }
} 
