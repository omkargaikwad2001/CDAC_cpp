#include<iostream>
using namespace std;
class Complex{

public:
	Complex() = default;
	Complex(int, int);

	//binary operator +
	Complex operator+(Complex&);

	//binary operator -
	Complex operator-(Complex&);

	//binary operator *
	Complex operator*(Complex&);

	void display();

private:
	int real = 0;
	int imaginary = 0;
};