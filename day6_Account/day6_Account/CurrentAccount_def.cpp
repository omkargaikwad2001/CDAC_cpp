#include "CurrentAccount.h"
#include <iostream>
using namespace std;

CurrentAccount::CurrentAccount() : Account(), overLimitAmount(0.0) {}

CurrentAccount::CurrentAccount(int accNo, const string& name, double bal, double overLimit)
    : Account(accNo, name, bal), overLimitAmount(overLimit) {
}

void CurrentAccount::accept() {
    Account::accept();
    cout << "Enter Over Limit Amount: ";
    cin >> overLimitAmount;
}

void CurrentAccount::display() const {
    Account::display();
    cout << "Over Limit Amount: " << overLimitAmount << endl;
}
