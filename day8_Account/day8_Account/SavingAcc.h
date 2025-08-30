#pragma once
#include"Account.h"
class SavingAcc:public Account {

public:

	SavingAcc();

	SavingAcc(int, const char*, float);

	float cal_NetBalance();

	float getIntrest();

	void display();

private:

	static float int_rate;

};