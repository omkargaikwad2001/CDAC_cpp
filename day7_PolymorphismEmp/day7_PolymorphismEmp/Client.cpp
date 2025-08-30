#include<iostream>
//#include"Date.h"
//#include"MyString.h"
//#include"Person.h"
//#include"Employee.h"
//#include"WageEmployee.h"
#include"SalesPerson.h"
using namespace std;
int main() {

	/*
	Date d1;
	d1.display();

	Date d2(29, 8, 2025);
	d2.display();
	*/

	//MyString s1;
	//s1.display();

	//MyString s2("Omkar gaikwad");
	//s2.display();

	/*Person p(25, "Omkar gaikwad", 4, 5, 2001);
	p.display();*/

	/*Employee e(101, 25, "Omkar gaikwad", 4, 5, 2001);
	e.display();*/

	WageEmployee w(5,1000,101, 25, "Omkar gaikwad", 4, 5, 2001);
	w.display();

	SalesPerson p(10,500,5, 1000, 101, 25, "Omkar gaikwad", 4, 5, 2001);
	p.display();


	return 0;
}