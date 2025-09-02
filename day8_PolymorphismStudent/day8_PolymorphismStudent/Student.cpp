#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

Student::Student() : rollno(0) {
    strcpy_s(course, sizeof(course), "NoCourse");
}

Student::Student(const char* n, int d, int m, int y, int r, const char* c)
    : Person(n, d, m, y), rollno(r) {
    strcpy_s(course, sizeof(course), c);
}

void Student::accept() {
    Person::accept();
    cout << "Enter roll number: ";
    cin >> rollno;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter course: ";
    cin.getline(course, sizeof(course));
}

void Student::display() const {
    Person::display();
    cout << "Roll No: " << rollno << endl;
    cout << "Course: " << course << endl;
}
