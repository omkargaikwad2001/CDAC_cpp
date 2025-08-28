#include "WageEmployee.h"

class SalesPerson : public WageEmployee {
public:
    SalesPerson();
    SalesPerson(int id, const char* name, Date dob, int hours, double rate, int items, double comm);

    void display() const;
    double calculateSalary() const;

private:
    int itemsSold;
    double commissionPerItem;
};