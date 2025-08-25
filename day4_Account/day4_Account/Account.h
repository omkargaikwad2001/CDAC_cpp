#include <iostream>
#include <string>
using namespace std;

class Account {

public:
    // constructors
    Account(string name, float balance);

    // display
    void display();

    // static function to update interest rate
    static void updateIntRate(float rate);

    // apply interest and return new balance
    float getBalanceWithInterest();

private:
    int accNo;
    string name;
    float balance;

    static int nextAccNo;   // for auto-generating account number
    static float int_rate;  // common interest rate for all accounts
};
