#include<iostream>
using namespace std;

class Student {
private:
    float math, science, social_science;
    string name;
    int age;
    int roll_no;

public:
    // Setter method for student data
    void set_data(string student_name, int student_age, int student_roll_no) {
        name = student_name;
        age = student_age;
        roll_no = student_roll_no;
    }

    // Setter method for student marks
    void set_marks(float math_marks, float science_marks, float social_science_marks) {
        math = math_marks;
        science = science_marks;
        social_science = social_science_marks;
    }

    // Display method to show student details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Math Marks: " << math << endl;
        cout << "Science Marks: " << science << endl;
        cout << "Social Science Marks: " << social_science << endl;
    }
};

int main() {
    Student s1;

    // Set data for s1
    s1.set_data("John Doe", 18, 101);

    // Set marks for s1
    s1.set_marks(85, 90, 88);

    // Display student information
    s1.display();

    return 0;
}
