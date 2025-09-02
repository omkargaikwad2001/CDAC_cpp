#pragma once
#include "WageEmployee.h"

class SalesPerson : public WageEmployee {
public:
    SalesPerson();
    SalesPerson(int id, const char* name, Date dob, int hours, double rate, int sales, double commission);

    void display() const override;
    double calculateSalary() const override;

private:
    int itemsSold;
    double commissionPerItem;
};
