#include "SavingAcc.h"

double SavingAcc::int_rate = 4.5;

SavingAcc::SavingAcc() : Account() {}

SavingAcc::SavingAcc(int a, const char* n, double b) : Account(a, n, b) {}

double SavingAcc::cal_NetBalance() const {
    return balance + (balance * int_rate / 100.0);
}

double SavingAcc::getInterest() const {
    return (balance * int_rate / 100.0);
}
