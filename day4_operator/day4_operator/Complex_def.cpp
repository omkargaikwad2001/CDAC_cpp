#include<iostream>
#include"Complex.h"
using namespace std;

Complex::Complex(int r, int img)
{
	real = r;
	imaginary = img;
}

//overload binary operator +
Complex Complex::operator+(Complex& c)
{
	Complex temp;  //temp is local object

	temp.real = this->real + c.real;
	temp.imaginary = this->imaginary + c.imaginary;

	return temp;
}

//overload binary operator -
Complex Complex::operator-(Complex& c)
{
	Complex temp;  //temp is local object

	temp.real = this->real - c.real;
	temp.imaginary = this->imaginary - c.imaginary;

	return temp;
}

//overload binary operator *
Complex Complex::operator*(Complex& c)
{
	Complex temp;

	temp.real = (this->real * c.real) - (this->imaginary * c.imaginary);
	temp.imaginary = (this->real * c.imaginary) + (this->imaginary * c.real);

	return temp;
}


void Complex::display()
{
	cout << "Complex Number:: " << real << " + " << imaginary << "i"<<endl;
}