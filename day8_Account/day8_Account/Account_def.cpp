#include<iostream>
#include"Account.h"
using namespace std;

Account::Account() {
	accno = 0;
	balance = 0.0;
}

Account::Account(int accno, const char* name, float balance):name(name){
	this->accno = accno;
	this->balance = balance;
}

void Account::display() {
	cout << "Account number : " << accno << endl;
	name.display();
	cout << "Account balance : " << balance << endl;
}