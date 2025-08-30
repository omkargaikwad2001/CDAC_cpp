#include"Date.h"
#include<iostream>
using namespace std;
//default const
Date::Date() {
	day = 0;
	month = 0;
	year = 0;
}

//para const
Date::Date(int day, int month, int year) {

	this->day = day;
	this->month = month;
	this->year = year;

}

void Date::display() {
	cout <<"Date : "<< day << "/" << month << "/" << year << endl;
}