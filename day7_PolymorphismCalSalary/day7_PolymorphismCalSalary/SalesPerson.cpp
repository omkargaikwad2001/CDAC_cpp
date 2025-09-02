#include "SalesPerson.h"
#include <iostream>
using namespace std;

SalesPerson::SalesPerson() : WageEmployee(), itemsSold(0), commissionPerItem(0.0) {}

SalesPerson::SalesPerson(int id, const char* name, Date d, int hours, double rate, int sales, double commission)
    : WageEmployee(id, name, d, hours, rate), itemsSold(sales), commissionPerItem(commission) {
}

void SalesPerson::display() const {
    Employee::display();
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Rate per Hour: " << ratePerHour << endl;
    cout << "Items Sold: " << itemsSold << endl;
    cout << "Commission per Item: " << commissionPerItem << endl;
    cout << "Salary (with Commission): " << calculateSalary() << endl;
}

void SalesPerson::accept() {
    WageEmployee::accept();  // read base (id, name, dob, hours, rate)
    cout << "Enter Items Sold: ";
    cin >> itemsSold;
    cout << "Enter Commission per Item: ";
    cin >> commissionPerItem;
}


double SalesPerson::calculateSalary() const {
    return (hoursWorked * ratePerHour) + (itemsSold * commissionPerItem);
}
