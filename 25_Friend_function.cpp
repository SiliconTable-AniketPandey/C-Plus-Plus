#include <iostream>
using namespace std;

class Complex {
private:
  float real;
  float imag;

public:
  // Friend function to allow sum_complex direct access to private members
  friend Complex sum_complex(Complex o1, Complex o2);

  void set_number(float real_part, float imag_part) {
    real = real_part;
    imag = imag_part;
  }

  void print_number() {
    cout << real << " + " << imag << "i" << endl;
  }
};

Complex sum_complex(Complex o1, Complex o2) {
  Complex result;
  result.set_number((o1.real + o2.real), (o1.imag + o2.imag));
  return result;
}

int main() {
  // Create two complex numbers
  Complex c1, c2;

  // Set values for c1
  c1.set_number(2.5, 3.1);

  // Set values for c2
  c2.set_number(1.7, -4.2);

  // Print c1 and c2
  cout << "c1: ";
  c1.print_number();
  cout << "c2: ";
  c2.print_number();

  // Calculate sum using sum_complex function
  Complex c3 = sum_complex(c1, c2);

  // Print the sum (c3)
  cout << "Sum of c1 and c2: ";
  c3.print_number();

  return 0;
}
