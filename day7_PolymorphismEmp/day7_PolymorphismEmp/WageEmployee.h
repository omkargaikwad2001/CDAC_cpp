#include"Employee.h"
class WageEmployee:public Employee{

public:

	WageEmployee();

	WageEmployee(int,int,int, int, const char*, int, int, int);

	int cal_WageSalary();

	void display();


protected:
	int hour;
	int rate;


};