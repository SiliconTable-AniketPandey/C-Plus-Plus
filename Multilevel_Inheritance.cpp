# include <iostream>
using namespace std;



class Vechiel{
    public:
    void display1(){
        cout<<"I am a vechiel"<<endl;
    }
};

class FourWheeler : public Vechiel{
    public:
    void display2(){
        cout<<"I have four wheels"<<endl;
    }
};

class Car : public FourWheeler{
    public:
    void display3(){
        cout<<"I am a car"<<endl;
    }
};

int main(){
    Car car;
    car.display1();
    car.display2();
    car.display3();
}