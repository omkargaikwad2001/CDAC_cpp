#include<iostream>
#include"SavingAccount.h"
using namespace std;

float SavingAcc::int_rate = 4.5;

SavingAcc::SavingAcc() {

}

SavingAcc::SavingAcc(int accno, const char* name, float balance) : Account(accno, name, balance) {

}

float SavingAcc::cal_NetBalance() {
	return balance + (balance * int_rate / 100);
}

float SavingAcc::getIntrest() {
	return int_rate;
}


void SavingAcc::display() {
	cout << "Saving Account Details\n";
	Account::display();
	cout << "Interest rate " << int_rate << endl;
	cout << "Balance " << cal_NetBalance() << endl;
}