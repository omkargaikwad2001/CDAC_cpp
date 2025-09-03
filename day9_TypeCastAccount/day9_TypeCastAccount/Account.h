#pragma once

#include"MyString.h"
class Account {

public:

	Account();

	Account(int, const char*, float);

	virtual float cal_NetBalance() = 0;

	virtual void display();

	int getAcc() {
		return accno;
	}

	static int getCount();


protected:
	float balance;


private:
	int accno;
	MyString name;
	static int count;
};