#include<iostream>
#include"RecurringAcc.h"
using namespace std;

float RecurringAcc::int_rate = 7.5;

RecurringAcc::RecurringAcc() {
	instAmt = 0.0;
	noOfInst = 0;
}

RecurringAcc::RecurringAcc(int accno, const char* name, float balance, double instAmt, int noOfInst) :Account(accno, name, balance) {
	this->instAmt = instAmt;
	this->noOfInst = noOfInst;
	this->balance = cal_NetBalance();
}

float RecurringAcc::cal_NetBalance() {
	float total = instAmt * noOfInst;               // total money deposited
	float interest = (total * int_rate) / 100;      // interest on that money
	return total + interest;
}

double RecurringAcc::getInstallationAmt() {
	return instAmt;
}


void RecurringAcc::display() {
	cout << "RecurringAcc Account Details\n";
	Account::display();
	cout << "Interest rate " << int_rate << endl;
	cout << "Installment amount " << instAmt << endl;
	cout << "Num of Installment " << noOfInst << endl;
	cout << "Balance " << cal_NetBalance() << endl;
}