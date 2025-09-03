#include <iostream>
#include <fstream>
#include "Employee.h"
using namespace std;

int main() {
    Employee e;

    // Accept employee info
    e.accept();

    // Write object to file (binary)
    ofstream out("employee.dat", ios::binary);
    if (!out) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }
    out.write((char*)&e, sizeof(e));
    out.close();
    cout << "Employee object saved to file.\n";

    // Read object back
    ifstream in("employee.dat", ios::binary);
    if (!in) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }
    Employee e2;
    in.read((char*)&e2, sizeof(e2));
    in.close();

    cout << "\nEmployee object read from file:\n";
    e2.display();

    return 0;
}
