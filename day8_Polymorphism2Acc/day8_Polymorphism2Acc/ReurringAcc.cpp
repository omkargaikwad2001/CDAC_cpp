#include "RecurringAcc.h"

double RecurringAcc::int_rate = 7.5;

RecurringAcc::RecurringAcc() : Account() {
    installment_amt = 0.0;
    noOfInstallments = 0;
}

RecurringAcc::RecurringAcc(int a, const char* n, double b, double instAmt, int nInst)
    : Account(a, n, b) {
    installment_amt = instAmt;
    noOfInstallments = nInst;
}

double RecurringAcc::cal_NetBalance() const {
    double total = installment_amt * noOfInstallments;
    return total + (total * int_rate / 100.0);
}

double RecurringAcc::getInstallmentAmount() const {
    return installment_amt;
}
