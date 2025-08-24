#include<iostream>
using namespace std;
class Complex {

public:

	//default const
	Complex();

	//para const
	Complex(int, int);

	//getter for real and imagi
	int getReal();
	int getImagi();

	//setter for real and imagi
	void setReal(int);
	void setImagi(int);

	//display
	void display();

private:

	int real;
	int imaginary;

};