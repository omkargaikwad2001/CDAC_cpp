#pragma once
#include "Account.h"

class SavingsAccount : public Account {
public:
    SavingsAccount();
    SavingsAccount(int accNo, const string& name, double bal, double rate, int period);

    void accept();
    void display() const;
    double calculateNetBalance() const;

private:
    double rateOfInterestPerMonth;
    int periodInMonths;
};
