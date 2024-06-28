#include <iostream>
using namespace std;

void divide(int a , int b){
    if(b != 0){
        int c = a/b;
        cout<<"Result= "<<c<<endl;
    }
    else throw(b);
}

int main(){
    try{
        divide(4,3);
        divide(4,0);
    }

    catch(int e){
        cout<<"Division by zero error"<<endl;
    }

    return 0;
}