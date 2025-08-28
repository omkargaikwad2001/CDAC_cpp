#include "WageEmployee.h"
#include <iostream>
using namespace std;

WageEmployee::WageEmployee() : Employee(), hoursWorked(0), ratePerHour(0) {}

WageEmployee::WageEmployee(int id, const char* name, Date dob, int hours, double rate)
    : Employee(id, name, dob), hoursWorked(hours), ratePerHour(rate) {
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
