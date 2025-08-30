#include "MyString.h"
#include "Date.h"

class Employee {
public:
    Employee();
    Employee(int id, const char* name, Date dob);
    virtual ~Employee();

    virtual void display() const;               // virtual for overriding
    virtual double calculateSalary() const = 0; // pure virtual

protected:
    int empId;
    MyString empName;
    Date dob;
};
