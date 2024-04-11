# include <iostream>
using namespace std;
long long sumnSeries(long long n = 0){ // default value as n = 0
    if (n <= 0){
        return 0;
    }
    else{
        return ((long)n) * ((long)(n+1))/2;
    }
};

int main(){
    int y , x= 99999;
    y = sumnSeries(x); // passing x has a variable
    cout<<y<<endl; 
     y = sumnSeries(500); //pasing a number 
     cout<<y<<endl;
     x = sumnSeries(-99); // passing a number
     cout<<x<<endl;
}