#include "Student.h"
#include <iostream>
using namespace std;

int main() {
    Student s1;   // default
    s1.accept();

    Student s2("Omkar", 28, 8, 2000);   // parameterized

    cout << "\nStudent Details:\n";
    s1.display();
    s2.display();

    Student s3;
    s3.display();

    return 0;
}
