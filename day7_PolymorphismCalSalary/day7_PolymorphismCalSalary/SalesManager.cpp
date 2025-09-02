#include "SalesManager.h"
#include <iostream>
using namespace std;

SalesManager::SalesManager() : Employee(), totalSales(0), commissionRate(0.0) {}

SalesManager::SalesManager(int id, const char* name, Date d, int sales, double commission)
    : Employee(id, name, d), totalSales(sales), commissionRate(commission) {
}

void SalesManager::accept() {
    Employee::accept();
    cout << "Enter Total Sales: ";
    cin >> totalSales;
    cout << "Enter Commission Rate: ";
    cin >> commissionRate;
}

void SalesManager::display() const {
    Employee::display();
    cout << "Total Sales: " << totalSales << endl;
    cout << "Commission Rate: " << commissionRate << endl;
    cout << "Salary: " << calculateSalary() << endl;
}

double SalesManager::calculateSalary() const {
    return totalSales * commissionRate;
}
