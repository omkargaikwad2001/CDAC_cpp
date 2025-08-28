#pragma once
#include <iostream>
#include <string>
using namespace std;

class Account {
public:
    Account();
    Account(int accNo, const string& name, double bal);

    void accept();
    void display() const;

protected:
    int accountNumber;
    string holderName;
    double balance;
};
