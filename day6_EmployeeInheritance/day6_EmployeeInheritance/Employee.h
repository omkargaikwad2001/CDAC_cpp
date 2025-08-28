#include "MyString.h"
#include "Date.h"

class Employee {
public:
    Employee();                                  // default ctor
    Employee(int id, const char* name, Date dob); // param ctor
    ~Employee();                                 // destructor

    void display() const;                        // display details
    double calculateSalary() const;              // simple version

protected:
    int empId;
    MyString empName;
    Date dob;
};
