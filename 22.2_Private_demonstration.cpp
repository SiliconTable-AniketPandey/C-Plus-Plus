# include<iostream>
using namespace std;
class Employee{
    
    private:
        double salary;
        int mobile_number;
    public:
        string name;
        int age;
    void set_private_data(double emp_salary, int ContactNumber);
    void set_public_data(string emp_name, int emp_age);
    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<salary<<endl;
        cout<<mobile_number<<endl;
    }
};

void Employee::set_private_data(double emp_salary, int ContactNumber){
    salary = emp_salary;
    mobile_number = ContactNumber;
}

void Employee::set_public_data(string emp_name, int emp_age){
    name = emp_name;
    age = emp_age;
}

int main(){
    Employee emp1;
    emp1.set_private_data(100000, 123456789);
    emp1.set_public_data("Raju", 25);
    emp1.display();
    return 0;
}

