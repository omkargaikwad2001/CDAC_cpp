#pragma once
#include "Employee.h"

class SalesManager : public Employee {
public:
    SalesManager();
    SalesManager(int id, const char* name, Date dob, int sales, double commission);

    void accept() override;
    void display() const override;
    double calculateSalary() const override;

private:
    int totalSales;
    double commissionRate;
};
