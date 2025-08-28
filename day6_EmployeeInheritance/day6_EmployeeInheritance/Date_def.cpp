#include "Date.h"
#include <iostream>
using namespace std;

Date::Date() {
    day = 0;
    month = 0;
    year = 0;
}

Date::Date(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

void Date::accept() {
    cout << "Enter day, month, year : ";
    cin >> day >> month >> year;
}

void Date::display() const{
    cout << day << "/" << month << "/" << year << endl;
}
