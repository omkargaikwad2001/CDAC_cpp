#include "SavingsAccount.h"
#include <iostream>
using namespace std;

SavingsAccount::SavingsAccount()
    : Account(), rateOfInterestPerMonth(0.0), periodInMonths(0) {
}

SavingsAccount::SavingsAccount(int accNo, const string& name, double bal, double rate, int period)
    : Account(accNo, name, bal), rateOfInterestPerMonth(rate), periodInMonths(period) {
}

void SavingsAccount::accept() {
    Account::accept();
    cout << "Enter Rate of Interest (per month): ";
    cin >> rateOfInterestPerMonth;
    cout << "Enter Period of Saving (months): ";
    cin >> periodInMonths;
}

void SavingsAccount::display() const {
    Account::display();
    cout << "Rate of Interest (per month): " << rateOfInterestPerMonth << endl;
    cout << "Period of Saving (months): " << periodInMonths << endl;
    cout << "Net Balance: " << calculateNetBalance() << endl;
}

double SavingsAccount::calculateNetBalance() const {
    return balance + (rateOfInterestPerMonth * periodInMonths);
}
