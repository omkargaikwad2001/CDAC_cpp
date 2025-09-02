#include "WageEmployee.h"
#include <iostream>
using namespace std;

WageEmployee::WageEmployee() : Employee(), hoursWorked(0), ratePerHour(0.0) {}

WageEmployee::WageEmployee(int id, const char* name, Date d, int hours, double rate)
    : Employee(id, name, d), hoursWorked(hours), ratePerHour(rate) {
}

void WageEmployee::accept() {
    // First read base employee data
    Employee::accept();

    cout << "Enter Hours Worked: ";
    cin >> hoursWorked;

    cout << "Enter Rate per Hour: ";
    cin >> ratePerHour;
}

void WageEmployee::display() const {
    Employee::display();
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Rate per Hour: " << ratePerHour << endl;
    cout << "Salary: " << calculateSalary() << endl;
}

double WageEmployee::calculateSalary() const {
    return hoursWorked * ratePerHour;
}
