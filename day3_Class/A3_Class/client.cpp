#include<iostream>
#include"Date.h"
using namespace std;
int main() {

	//Date d; //this is default constructor call
	
	//Date d(23, 8, 2025); //this is parameterised constructor call
	//d.display();
	
	//Date d1(1, 1, 2025);	
	//Date d2(d1);
	//d2.display();

	//Date d1;
	//d1.accept();
	//d1.display();

	Date d(23, 8, 2025);
	d.showDate();
	
	cout << "\n**********\n" << endl;

	Date d2(d);
	d2.showDate();


	return 0;
}