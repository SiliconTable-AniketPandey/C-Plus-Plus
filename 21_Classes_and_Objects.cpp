/**
 * Class
 * 
 * In C++, a class is a user-defined data type that serves as a blueprint for creating objects.
 * It is a fundamental building block of object-oriented programming (OOP), allowing you to encapsulate data (attributes) and operations (methods) into a single unit.
 * 
 * class ClassName {
    public:
        // Public members (methods and data members)
        // These members are accessible from outside the class
        ReturnType method1(ParameterType1 param1, ParameterType2 param2, ...);

    ReturnType method2(ParameterType1 param1, ParameterType2 param2, ...);

    private:
        // Private members (methods and data members)
        // These members are accessible only within the class
        DataType dataMember1;
        DataType dataMember2;

    protected:
        // Protected members (methods and data members)
        // These members are accessible within the class and its derived classes
        ReturnType method3(ParameterType1 param1, ParameterType2 param2, ...);
};

 * 
 */

/**
 *  Objects
 * 
 * In C++ and other object-oriented programming (OOP) languages, an object is an instance of a class. 
 * It is a tangible entity that represents a particular instance of a class, embodying the properties (attributes) and behaviors (methods) defined by its class. 
 * Objects are fundamental units of OOP and are used to model and interact with real-world entities or concepts in software.
 * 
 */

# include <iostream>
#include <string>
# include <algorithm>
using namespace std;

class Person{
    public:
            string name; // Name and age are the attributes of the class
            int age;
            int area( double a = 0, double b = 0) {return a * b;}

            void reverse_name() { reverse(name.begin(), name.end());}
            
};

int main() {
    Person person; // person is the object of the class Person
    person.name = "Aniket"; // Assigning values to the attributes of the class through the object constructor
    person.age = 25;
    cout<<"Area of the rectangle is "<<person.area( 100,200)<<endl; 
    person.reverse_name();
    cout<<"Name reversed is "<<person.name<<endl;
    
    cout<<person.name << " is " << person.age << " years old" << endl;
    return 0;
}