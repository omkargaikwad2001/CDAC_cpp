#pragma once
#include "Student.h"
#include "Employee.h"

class Researcher : public Student, public Employee {
    char subject[50];
public:
    Researcher();
    Researcher(const char* n, int d, int m, int y,
        int r, const char* c, int id, float sal, const char* sub);
    void accept() override;
    void display() const override;
};
