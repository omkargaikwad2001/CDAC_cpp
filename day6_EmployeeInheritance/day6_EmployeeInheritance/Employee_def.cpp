#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee() : empId(0), empName("Unknown"), dob(1, 1, 2000) {}

Employee::Employee(int id, const char* name, Date d)
    : empId(id), empName(name), dob(d) {
}

Employee::~Employee() {}

void Employee::display() const {
    cout << "Employee ID: " << empId << endl;
    cout << "Name: " << empName << endl;
    cout << "DOB: ";
    dob.display();
}
