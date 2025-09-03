#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
    try {
        Employee e1;
        e1.accept();
        e1.display();
    }
    catch (const exception& ex) {
        cout << "Error: " << ex.what() << endl;
    }

    try {
        Employee e2(102, "Omkar", 55000.50f);
        e2.display();
    }
    catch (const exception& ex) {
        cout << "Error: " << ex.what() << endl;
    }

    return 0;
}
