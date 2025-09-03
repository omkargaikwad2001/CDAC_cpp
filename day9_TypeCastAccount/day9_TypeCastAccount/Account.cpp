#include<iostream>
#include"Account.h"
using namespace std;

int Account:: count = 0;

Account::Account() {
	accno = 0;
	balance = 0.0;
	count++;
}

Account::Account(int accno, const char* name, float balance) :name(name) {
	this->accno = accno;
	this->balance = balance;
	count++;
}

void Account::display() {
	cout << "Account number : " << accno << endl;
	name.display();
	cout << "Account balance : " << balance << endl;
}

int Account::getCount() {
	return count;
}