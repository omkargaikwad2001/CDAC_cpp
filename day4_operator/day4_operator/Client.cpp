#include<iostream>
#include"Complex.h"
using namespace std;

int main()
{
	Complex c1;
	c1.display();

	Complex c2(3, 5);
	c2.display();

	Complex c3(7, 5);
	c3.display();

	cout << "Addition:"<<endl;
	c1 = c2 + c3;  //c2.operator+(c3)
	c1.display();

	cout << "Subtraction:" << endl;
	c1 = c2 - c3;  //c2.operator-(c3)
	c1.display();

	cout << "Multiplication:" << endl;
	c1 = c2 * c3;  //c2.operator*(c3)
	c1.display();

	return 0;
}