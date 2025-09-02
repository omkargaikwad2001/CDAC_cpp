#include "Researcher.h"
#include <iostream>
#include <cstring>
using namespace std;

Researcher::Researcher() {
    strcpy_s(subject, sizeof(subject), "NoSubject");
}

Researcher::Researcher(const char* n, int d, int m, int y,
    int r, const char* c, int id, float sal, const char* sub)
    : Person(n, d, m, y), Student(n, d, m, y, r, c), Employee(n, d, m, y, id, sal) {
    strcpy_s(subject, sizeof(subject), sub);
}

void Researcher::accept() {
    Person::accept();

    cout << "Enter roll number: ";
    cin >> rollno;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter course: ";
    cin.getline(course, sizeof(course));

    cout << "Enter empid: ";
    cin >> empid;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter salary: ";
    cin >> salary;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter subject: ";
    cin.getline(subject, sizeof(subject));
}

void Researcher::display() const {
    Person::display();
    cout << "Roll No: " << rollno << endl;
    cout << "Course: " << course << endl;
    cout << "Emp ID: " << empid << endl;
    cout << "Salary: " << salary << endl;
    cout << "Subject: " << subject << endl;
}
