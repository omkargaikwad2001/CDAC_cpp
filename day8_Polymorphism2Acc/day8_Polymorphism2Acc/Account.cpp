#include "Account.h"
#include <cstring>  
using namespace std;

Account::Account() {
    accno = 0;
    strcpy_s(name, sizeof(name), "NoName");
    balance = 0.0;
}

Account::Account(int a, const char* n, double b) {
    accno = a;
    strcpy_s(name, sizeof(name), n);  
    balance = b;
}

void Account::display() const {
    cout << "Account No: " << accno << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl;
}
