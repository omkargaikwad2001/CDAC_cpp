#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

int Student::counter = 1000;   // starting roll number

Student::Student() {
    roll_num = counter++;
    strcpy_s(name,30, "NA");
}

Student::Student(const char* nm, int d, int m, int y) : dateOfBirth(d, m, y) {
    roll_num = counter++;
    strcpy_s(name, 30, nm);
}

void Student::accept() {
    roll_num = counter++;
    cout << "Enter name : ";
    cin.getline(name, 30);
    dateOfBirth.accept();
}

void Student::display() {
    cout << "Roll = " << roll_num << ", Name = " << name << ", DOB = ";
    dateOfBirth.display();
}
