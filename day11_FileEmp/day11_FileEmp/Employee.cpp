#define _CRT_SECURE_NO_WARNINGS
#include "Employee.h"

// Default constructor
Employee::Employee() {
    empno = 0;
    strcpy(name, "");
    salary = 0.0f;
}

// Accept employee data
void Employee::accept() {
    cout << "Enter Employee No: ";
    cin >> empno;
    cin.ignore(); 
    cout << "Enter Name: ";
    cin.getline(name, 50);
    cout << "Enter Salary: ";
    cin >> salary;
}

// Display employee data
void Employee::display() const {
    cout << "Employee No : " << empno << endl;
    cout << "Name        : " << name << endl;
    cout << "Salary      : " << salary << endl;
    cout << "-------------------------\n";
}
