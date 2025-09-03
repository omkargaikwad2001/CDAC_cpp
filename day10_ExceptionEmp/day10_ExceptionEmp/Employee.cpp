#include "Employee.h"
#include <iostream>
#include <cstring>
#include <cctype>       // for isalpha, isspace
#include <stdexcept>    // for runtime_error
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
    if (id < 0)
        throw runtime_error("Employee ID cannot be negative!");

    if (name == nullptr || strlen(name) == 0)
        throw runtime_error("Employee name cannot be empty!");

    for (size_t i = 0; i < strlen(name); i++) {
        if (!(isalpha(name[i]) || isspace(name[i])))
            throw runtime_error("Employee name has special characters!");
    }

    if (sal < 0)
        throw runtime_error("Salary cannot be negative!");

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
    if (employee_id < 0)
        throw runtime_error("Employee ID cannot be negative!");

    cin.ignore(); // remove leftover newline
    cout << "Enter Employee Name: ";
    cin.getline(temp, 100);
    if (strlen(temp) == 0)
        throw runtime_error("Employee name cannot be empty!");

    for (size_t i = 0; i < strlen(temp); i++) {
        if (!(isalpha(temp[i]) || isspace(temp[i])))
            throw runtime_error("Employee name has special characters!");
    }

    cout << "Enter Salary: ";
    cin >> salary;
    if (salary < 0)
        throw runtime_error("Salary cannot be negative!");

    delete[] employee_name;
    employee_name = new char[strlen(temp) + 1];
    strcpy_s(employee_name, strlen(temp) + 1, temp);
}

// Display employee details
void Employee::display() const {
    cout << "Employee ID   : " << employee_id << endl;
    cout << "Employee Name : " << employee_name << endl;
    cout << "Salary        : " << salary << endl;
}
