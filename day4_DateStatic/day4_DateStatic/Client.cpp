#include<iostream>
#include "Date.h"
using namespace std;

int main() {
    Date d1;             // default
    Date d2(25, 8, 2025); // parameterized
    Date d3(d2);         // copy

    cout << "Current object count: " << Date::getCount() << endl;

    {
        Date d4(1, 1, 2020);
        cout << "Current object count: " << Date::getCount() << endl;
    } // d4 destroyed here, destructor called

    cout << "Current object count: " << Date::getCount() << endl;

    return 0;
}
