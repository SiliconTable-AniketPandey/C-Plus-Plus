# include <iostream>
using namespace std;

class Car{
    private:
        string brand;
        int numberplate;

    public:
        Car(string b , int number) : brand(b), numberplate(number) {}

        string getBrand() const { return brand; }

        void set_numberplate(int number) { numberplate = number; }

        void display_info() const{
            cout << "Brand: " << brand << endl;
            cout << "Numberplate: " << numberplate << endl;
        }
};


int main()
{
    Car Mycar("Alto", 515);
    cout<<Mycar.getBrand()<<endl;
    Mycar.display_info();
}