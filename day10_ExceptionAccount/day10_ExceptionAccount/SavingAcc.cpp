#include "SavingAcc.h"
#include <iostream>
#include <stdexcept>
using namespace std;

float SavingAcc::int_rate = 4.5f;

SavingAcc::SavingAcc() {
}

SavingAcc::SavingAcc(int accno, const char* name, float balance)
    : Account(accno, name, balance) {
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

void SavingAcc::withdraw(float amt) {
    if (amt > balance) {
        throw runtime_error("Withdrawal amount greater than available balance!");
    }
    float remaining = balance - amt;
    if (remaining < 10000) {
        throw runtime_error("Balance would drop below 10000 after withdrawal!");
    }
    balance = remaining;
    cout << "Withdrawal successful. New balance: " << balance << endl;
}
