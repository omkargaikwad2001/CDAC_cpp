#pragma once
#include "Employee.h"

class WageEmployee : public Employee {
public:
    WageEmployee();
    WageEmployee(int id, const char* name, Date dob, int hours, double rate);

    void accept() override;              
    void display() const override;
    double calculateSalary() const override;

protected:
    int hoursWorked;
    double ratePerHour;
};
