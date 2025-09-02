#include "Employee.h"
#include <iostream>
#include <limits>   // for numeric_limits
using namespace std;

Employee::Employee() : empId(0), empName("Unknown"), dob(1, 1, 2000) {}

Employee::Employee(int id, const char* name, Date d)
    : empId(id), empName(name), dob(d) {
}

Employee::~Employee() {}

void Employee::accept() {
    cout << "Enter Employee ID: ";
    cin >> empId;

    // clear newline left in buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    char buffer[100];
    cout << "Enter Employee Name: ";
    cin.getline(buffer, 100);
    empName = buffer; // uses MyString operator=

    cout << "Enter Date of Birth:" << endl;
    dob.accept(); // calls Date::accept()
}

void Employee::display() const {
    cout << "Employee ID: " << empId << endl;
    cout << "Name: " << empName << endl;
    cout << "DOB: ";
    dob.display();
}
