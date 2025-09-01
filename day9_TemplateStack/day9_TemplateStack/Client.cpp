#include <iostream>
#include "Stack.h"
using namespace std;

class Complex {
    double real, imag;
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    friend ostream& operator<<(ostream& os, const Complex& c) {
        os << c.real << (c.imag >= 0 ? "+" : "") << c.imag << "i";
        return os;
    }
};

int main() {
    Stack<int> s1(5);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();
    cout << "Popped: " << s1.pop() << endl;
    s1.display();

    cout << "\n";

    Stack<double> s2(5);
    s2.push(1.1);
    s2.push(2.2);
    s2.display();
    cout << "Popped: " << s2.pop() << endl;
    s2.display();

    cout << "\n";

    // For Complex: either explicitly instantiate in Stack.cpp or keep all in header
    Stack<Complex> s3(5);    // if not instantiated in Stack.cpp, will fail at link
    s3.push(Complex(1.0, 2.0));
    s3.push(Complex(3.5, -1.5));
    s3.display();
    cout << "Popped: " << s3.pop() << endl;
    s3.display();

    return 0;
}
