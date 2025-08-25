#include "MyString.h"
#include <iostream>
using namespace std;

int main() {
    MyString s1;                    // Default constructor
    MyString s2("Hello World");     // Parameterized constructor
    MyString s3 = s2;               // Copy constructor

    cout << "s1: ";
    s1.display();

    cout << "s2: ";
    s2.display();

    cout << "s3: ";
    s3.display();

    return 0;
}
