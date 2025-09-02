#pragma once
#include "Account.h"

class SavingAcc : public Account {
private:
    static double int_rate;   

public:
    SavingAcc();
    SavingAcc(int, const char*, double);

    double cal_NetBalance() const override;

    double getInterest() const;   
};
