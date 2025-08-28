#pragma once
#include "Account.h"

class CurrentAccount : public Account {
public:
    CurrentAccount();
    CurrentAccount(int accNo, const string& name, double bal, double overLimit);

    void accept();
    void display() const;

private:
    double overLimitAmount;
};
