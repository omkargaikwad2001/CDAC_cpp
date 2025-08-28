#include "Employee.h"

class WageEmployee : public Employee {
public:
    WageEmployee();
    WageEmployee(int id, const char* name, Date dob, int hours, double rate);

    void display() const;
    double calculateSalary() const ;

protected:
    int hoursWorked;
    double ratePerHour;
};
