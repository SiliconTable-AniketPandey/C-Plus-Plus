#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(){
    char somthing[100];
    strcpy(somthing,"07:14 AM");
    fstream file;
    file.open("BinarySample.dat",ios::binary| ios:: in | ios:: out | ios::trunc);
    if(!file.is_open()){
        cout<<"Cannot open file"<<endl;
    }
    else{
        cout<<"File opened sucessfully"<<endl;
    }
    for (int i = 0 ; i<=strlen(somthing); i++){
        file.put(somthing[i]);
    }

    file.seekg(0);
    char ch;
    while(file.good()){
        file.get(ch);
        cout<<ch;
    }
    file.close();
    return 0;
}