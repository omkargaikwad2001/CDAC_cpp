#include<iostream>
#include"Complex.h"
int main() {

	//Complex c; //this is default

	//Complex c(10, 20);
	//c.display();

	Complex c;
	c.setReal(10);
	c.setImagi(20);

	//cout << "Real = " << c.getReal() << endl;
	//cout << "Imaginary = " << c.getImagi()<<" i" << endl;

	c.display();

	return 0;
}