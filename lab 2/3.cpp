//Program to calculate the sum of two complex objects using OOP concept.

#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    Complex operator + (Complex other) {
        return Complex(this->real + other.real, this->imag + other.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(7, 6);
    Complex c2(8, 9);

    Complex c3 = c1 + c2;

    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "c1 + c2 = "; c3.display();

    return 0;
}
