#include "SalesPerson.h"
#include <iostream>
using namespace std;

SalesPerson::SalesPerson() : WageEmployee(), itemsSold(0), commissionPerItem(0) {}

SalesPerson::SalesPerson(int id, const char* name, Date dob, int hours, double rate, int items, double comm)
    : WageEmployee(id, name, dob, hours, rate), itemsSold(items), commissionPerItem(comm) {
}

void SalesPerson::display() const {
    WageEmployee::display();
    cout << "Items Sold: " << itemsSold << endl;
    cout << "Commission per Item: " << commissionPerItem << endl;
    cout << "Total Salary: " << calculateSalary() << endl;
}

double SalesPerson::calculateSalary() const {
    return (hoursWorked * ratePerHour) + (itemsSold * commissionPerItem);
}
