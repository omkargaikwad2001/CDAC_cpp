#pragma once
#include "Person.h"

class Employee : virtual public Person {
protected:
    int empid;
    float salary;
public:
    Employee();
    Employee(const char* n, int d, int m, int y, int id, float sal);
    void accept() override;
    void display() const override;
};
