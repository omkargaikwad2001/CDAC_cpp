#include<iostream>
#include"Complex.h"
using namespace std;
//default const
Complex::Complex() {
	//cout << "This is default constructor" << endl;
}

//para const
Complex::Complex(int real, int imagi) {
	this->real = real;
	this->imaginary = imagi;
}

//getter for real and imagi
int Complex::getReal() {
	return real;
}
int Complex::getImagi() {
	return imaginary;
}

//setter for real and imagi
void Complex::setReal(int real) {
	this->real = real;
}
void Complex::setImagi(int imagi) {
	this->imaginary = imagi;
}

//display
void Complex::display() {
	cout << real;
	if (imaginary >= 0)
		cout << " + " << imaginary << "i";
	else
		cout << " - " << -imaginary << "i";
	cout << endl;
}
