#include "SalesPerson.h"
#include <iostream>
using namespace std;

int main() {
    Date d1(28, 8, 2000);

    WageEmployee w1(101, "Ramesh", d1, 40, 200);
    cout << "--- Wage Employee ---" << endl;
    w1.display();

    cout << endl;

    SalesPerson s1(102, "Suresh", d1, 30, 150, 20, 50);
    cout << "--- Sales Person ---" << endl;
    s1.display();

    return 0;
}
