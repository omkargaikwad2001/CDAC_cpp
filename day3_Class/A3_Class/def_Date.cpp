#include<iostream>
#include"Date.h"
using namespace std;

Date::Date(){
	cout << "This is default constructor" << endl;
}

Date::Date(int day,int month,int year) {
	
	this->day = day;
	this->month = month;
	this->year = year;

}

//copy constructor
Date::Date(Date &obj) {
	cout << "Copy const called" << endl;
	this->day = obj.day;
	this->month = obj.month;
	this->year = obj.year;
}

void Date::accept() {

	cout << "Enter day : ";
	cin >> day;
	
	cout << "Enter month : ";
	cin >> month;

	cout << "Enter year : ";
	cin >> year;

}

void Date::display() {

	cout << day << "/" << month << "/" << year << endl;

}

void Date::showDate() {
	
	cout << day << "/" << month << "/" << year << endl;

}