#include "Complex.h"

// parameterized constructor
Complex::Complex(int r, int img)
{
    real = r;
    imaginary = img;
}

// pre-increment
Complex Complex::operator++()
{
    cout << "\nPre increment called" << endl;
    ++real;
    ++imaginary;
    return *this;
}

// post-increment
Complex Complex::operator++(int)
{
    cout << "\nPost increment called" << endl;
    Complex temp = *this;
    real++;
    imaginary++;
    return temp;
}

// unary minus
Complex Complex::operator-()
{
    Complex temp;
    temp.real = -real;
    temp.imaginary = -imaginary;
    return temp;
}

// Complex + int
Complex Complex::operator+(int n)
{
    Complex temp;
    temp.real = real + n;
    temp.imaginary = imaginary + n;
    return temp;
}

// int + Complex
Complex operator+(int n, const Complex& c)
{
    Complex temp;
    temp.real = n + c.real;
    temp.imaginary = n + c.imaginary;
    return temp;
}

// output operator
ostream& operator<<(ostream& out, const Complex& c)
{
    out << c.real << " + " << c.imaginary << "i";
    return out;
}

void Complex::display()
{
    cout << "Complex Number:: " << real << " + " << imaginary << "i" << endl;
}
