#include<iostream>
#include "Date.h"
using namespace std;

int Date::count = 0;

Date::Date() {
    cout << "This is default constructor" << endl;
    count++;
}

Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
    count++;
}

Date::Date(Date& obj) {
    cout << "Copy constructor called" << endl;
    this->day = obj.day;
    this->month = obj.month;
    this->year = obj.year;
    count++;
}

Date::~Date() {
    cout << "Destructor called" << endl;
    count--;
}

int Date::getCount() {
    return count;
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
