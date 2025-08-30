#include"WageEmployee.h"
class SalesPerson:public WageEmployee{

public:

	SalesPerson();
	
	SalesPerson(int,int,int, int, int, int, const char*, int, int, int);

	int cal_SalesSalary();

	void display();


private:
	int items;
	int commission;

};