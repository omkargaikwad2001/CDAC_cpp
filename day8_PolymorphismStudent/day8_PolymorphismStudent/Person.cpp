#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() : name("NoName"), birthdate(1, 1, 2000) {}
Person::Person(const char* n, int d, int m, int y) : name(n), birthdate(d, m, y) {}

void Person::accept() {
    cout << "Enter person name: ";
    name.accept();
    cout << "Enter birthdate:\n";
    birthdate.accept();
}

void Person::display() const {
    cout << "Name: "; name.display();
    cout << "\nBirthdate: "; birthdate.display();
    cout << endl;
}
