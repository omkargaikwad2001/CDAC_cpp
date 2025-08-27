#include<iostream>
#include"Complex.h"
using namespace std;

Complex::Complex() {
	cout << "Default called" << endl;
	real = 0;
	imagi = 0;
}

Complex::Complex(int real, int imagi) {
	cout << "Para called" << endl;;
	this->real = real;
	this->imagi = imagi;
}

Complex::Complex(const Complex& obj) {
	cout << "copy called" << endl;
	this->real = obj.real;
	this->imagi = obj.imagi;

}

Complex::~Complex() {
	cout << "Dis called" << endl;
}


Complex Complex::operator+(const Complex& obj) {
	Complex temp;
	temp.real = this->real + obj.real;
	temp.imagi = this->imagi + obj.imagi;
	return temp;
}

Complex Complex::operator-(const Complex& obj) {
	Complex temp;
	temp.real = this->real - obj.real;
	temp.imagi = this->imagi - obj.imagi;
	return temp;
}

Complex Complex::operator*(const Complex& obj) {
	Complex temp;

	temp.real = (this->real * obj.real) - (this->imagi * obj.imagi);

	temp.imagi = (this->real * obj.imagi) + (this->imagi * obj.real);

	return temp;
}

Complex Complex::operator++() {
	return Complex(++real, ++imagi);
}

Complex Complex::operator++(int) {
	return Complex(real++, imagi++);
}


void Complex::display() {
	cout << real << " + " << imagi << "i" << endl;
}