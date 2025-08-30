#include<iostream>
#include"SalesPerson.h"
using namespace std;

SalesPerson::SalesPerson() {
	items = 0;
	commission = 0;
}

SalesPerson::SalesPerson(int items, int commission, int hour, int rate, int eid, int age, const char* name, int day, int month, int year) 
	: WageEmployee(hour, rate, eid, age, name, day, month, year){
	this->items = items;
	this->commission = commission;
}

int SalesPerson::cal_SalesSalary() {
	return (hour * rate) + (items * commission);
}

void SalesPerson::display() {
	cout << "\n\n--------SalesPerson Details--------" << endl;
	Employee::display();
	cout << "Items sold : " << items << endl;
	cout << "Commission : " << commission << endl;
	cout << "Salary : " << cal_SalesSalary();


}