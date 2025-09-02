#pragma once
#include "Account.h"

class RecurringAcc : public Account {
private:
    double installment_amt;
    int noOfInstallments;
    static double int_rate;  

public:
    RecurringAcc();
    RecurringAcc(int, const char*, double, double, int);

    double cal_NetBalance() const override;

    double getInstallmentAmount() const; 
};
