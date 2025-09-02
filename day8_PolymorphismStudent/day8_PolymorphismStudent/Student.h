#pragma once
#include "Person.h"

class Student : virtual public Person {
protected:
    int rollno;
    char course[50];
public:
    Student();
    Student(const char* n, int d, int m, int y, int r, const char* c);
    void accept() override;
    void display() const override;
};
