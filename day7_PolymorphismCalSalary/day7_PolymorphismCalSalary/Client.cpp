#include "WageEmployee.h"
#include "SalesManager.h"
#include "SalesPerson.h"
#include <iostream>
using namespace std;

int main() {
    // Uncommenting below will cause error since Employee is abstract
    // Employee e;  // ❌ Error: cannot instantiate abstract class

    Employee* empArr[3];

    empArr[0] = new WageEmployee();
    empArr[1] = new SalesManager();
    empArr[2] = new SalesPerson();

    for (int i = 0; i < 3; ++i) {
        cout << "\n--- Accepting details for Employee " << i + 1 << " ---\n";
        empArr[i]->accept();
    }

    for (int i = 0; i < 3; ++i) {
        cout << "\n--- Employee " << i + 1 << " Info ---\n";
        empArr[i]->display();
        cout << "Polymorphic Salary Call: " << empArr[i]->calculateSalary() << endl;
    }

    for (int i = 0; i < 3; ++i) {
        delete empArr[i];
    }

    return 0;
}
