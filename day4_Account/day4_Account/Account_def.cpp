#include "Account.h"
#include"MyString.h"

int Account::nextAccNo = 1000;   
float Account::int_rate = 5.0;   

Account::Account(MyString name, float balance) {
    this->accNo = nextAccNo++;
    this->name = name;
    this->balance = balance;
}

void Account::display() {
    cout << "Account No: " << accNo << endl;
    cout << "Name: " << name << endl;
    cout << "Balance (with interest): " << getBalanceWithInterest() << endl;
}

float Account::getBalanceWithInterest() {
    return balance + (balance * int_rate / 100);
}

void Account::updateIntRate(float rate) {
    int_rate = rate;
}
