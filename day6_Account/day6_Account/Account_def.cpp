#include "Account.h"
#include <iostream>
using namespace std;

Account::Account() : accountNumber(0), holderName("NA"), balance(0.0) {}

Account::Account(int accNo, const string& name, double bal)
    : accountNumber(accNo), holderName(name), balance(bal) {
}

void Account::accept() {
    cout << "Enter Account Number: ";
    cin >> accountNumber;
    cin.ignore(); // clear buffer
    cout << "Enter Account Holder Name: ";
    getline(cin, holderName);
    cout << "Enter Balance: ";
    cin >> balance;
}

void Account::display() const {
    cout << "Account Number: " << accountNumber << endl;
    cout << "Holder Name: " << holderName << endl;
    cout << "Balance: " << balance << endl;
}
