#pragma once

#include"Account.h"
class RecurringAcc :public Account{

public:

	RecurringAcc();

	RecurringAcc(int, const char*, float, double, int);

	float cal_NetBalance();

	double getInstallationAmt();

	void display();

private:
	
	double instAmt;
	int noOfInst;
	static float int_rate;

};