#pragma once
#include "MyString.h"
#include "Date.h"

class Employee {
public:
    Employee();
    Employee(int id, const char* name, Date dob);
    virtual ~Employee();

    virtual void accept();               
    virtual void display() const;        
    virtual double calculateSalary() const = 0;

protected:
    int empId;
    MyString empName;
    Date dob;
};
