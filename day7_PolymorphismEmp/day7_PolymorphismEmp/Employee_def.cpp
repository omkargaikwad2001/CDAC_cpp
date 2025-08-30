#include"Employee.h";
#include<iostream>
using namespace std;

Employee::Employee() {
	eid = 0;
}

Employee::Employee(int eid, int age, const char* name, int day, int month, int year):person(age,name,day,month,year) {
	this->eid = eid;
}

void Employee::display() {
	cout << "Emp id : " << eid << endl;
	person.display();
}