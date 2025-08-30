#include "SalesPerson.h"
#include <iostream>
using namespace std;

int main() {
    Date d1(10, 5, 1995);
    Date d2(20, 8, 1990);

    WageEmployee w1(101, "John", d1, 40, 200);
    SalesPerson s1(102, "Alice", d2, 35, 150, 20, 50);

    cout << "--- Wage Employee ---" << endl;
    w1.display();

    cout << "\n--- Sales Person ---" << endl;
    s1.display();

    return 0;
}
