#include "Employee.h"

int main() {
    // Using default constructor
    Employee e1;
    e1.accept();
    e1.display();

    // Using parameterized constructor
    Employee e2(102, "Omkar", 55000.50f);
    e2.display();

    return 0;
}
