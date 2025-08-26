#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex
{
public:
    Complex() = default;
    Complex(int, int);

    // pre-increment
    Complex operator++();

    // post-increment
    Complex operator++(int);

    // unary minus
    Complex operator-();

    // Complex + int
    Complex operator+(int);

    // int + Complex (friend)
    friend Complex operator+(int, const Complex&);

    // output operator
    friend ostream& operator<<(ostream&, const Complex&);

    void display();

private:
    int real = 0, imaginary = 0;
};

#endif
