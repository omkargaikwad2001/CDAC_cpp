#include <iostream>
#include <cstring>
#include "Employee.h"
using namespace std;

// Default constructor
Employee::Employee() {
    employee_id = 0;
    salary = 0.0f;
    employee_name = new char[1];
    employee_name[0] = '\0';
}

// Parameterized constructor
Employee::Employee(int id, const char* name, float sal) {
    employee_id = id;
    salary = sal;
    employee_name = new char[strlen(name) + 1];
    strcpy_s(employee_name, strlen(name) + 1, name);

}

// Destructor
Employee::~Employee() {
    delete[] employee_name;
}

// Accept employee details
void Employee::accept() {
    char temp[100];
    cout << "Enter Employee ID: ";
    cin >> employee_id;
    cin.ignore();

    cout << "Enter Employee Name: ";
    cin.getline(temp, 100);

    cout << "Enter Salary: ";
    cin >> salary;

    delete[] employee_name;  // free old memory if any
    employee_name = new char[strlen(temp) + 1];
    strcpy_s(employee_name, strlen(temp) + 1, temp);

}

// Display employee details
void Employee::display() const {
    cout << "Employee ID   : " << employee_id << endl;
    cout << "Employee Name : " << employee_name << endl;
    cout << "Salary        : " << salary << endl;
}
