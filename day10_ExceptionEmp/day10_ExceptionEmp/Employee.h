#pragma once
#include <iostream>

class Employee {
private:
    int employee_id;
    char* employee_name;
    float salary;

public:
    // Constructors
    Employee();
    Employee(int id, const char* name, float sal);

    // Destructor
    ~Employee();

    // Accept data from console
    void accept();

    // Display data
    void display() const;
};
