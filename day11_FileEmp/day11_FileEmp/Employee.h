#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Employee {
private:
    int empno;
    char name[50];
    float salary;

public:
    Employee();

    void accept();
    void display() const;
};
