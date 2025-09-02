#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee() : empid(0), salary(0.0f) {}
Employee::Employee(const char* n, int d, int m, int y, int id, float sal)
    : Person(n, d, m, y), empid(id), salary(sal) {
}

void Employee::accept() {
    Person::accept();
    cout << "Enter empid: ";
    cin >> empid;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter salary: ";
    cin >> salary;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void Employee::display() const {
    Person::display();
    cout << "Emp ID: " << empid << endl;
    cout << "Salary: " << salary << endl;
}
