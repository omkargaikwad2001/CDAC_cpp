#include<iostream>
#include"WageEmployee.h"
using namespace std;

WageEmployee::WageEmployee() {
	hour = 0;
	rate = 0;
}

WageEmployee::WageEmployee(int hour,int rate,int eid, int age, const char* name, int day, int month, int year) : 
	Employee(eid, age, name, day, month, year) {
	
	this->hour = hour;
	this->rate = rate;
}

int WageEmployee::cal_WageSalary() {
	return hour * rate;
}

void WageEmployee::display() {

	cout << "--------WageEmployee Details--------" << endl;
	Employee::display();
	cout << "Hour : " << hour << endl;
	cout << "Rate : " << rate << endl;
	cout << "Salary : " << cal_WageSalary();
}