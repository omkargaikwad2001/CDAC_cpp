#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Account {
protected:
    int accno;
    char name[50];
    double balance;

public:
    Account();
    Account(int, const char*, double);
    virtual ~Account() {}

    void display() const;

    // pure virtual
    virtual double cal_NetBalance() const = 0;
};
