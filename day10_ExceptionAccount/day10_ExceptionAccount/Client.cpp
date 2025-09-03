#include <iostream>
#include "SavingAcc.h"
#include "RecurringAcc.h"
using namespace std;

int main() {
    // Simple test for withdraw
    SavingAcc sa(101, "Omkar", 20000.0f);
    sa.display();

    try {
        float amt;
        cout << "\nEnter amount to withdraw: ";
        cin >> amt;
        sa.withdraw(amt);
    }
    catch (const exception& ex) {
        cout << "Withdrawal failed: " << ex.what() << endl;
    }

    cout << "\n--- Now showing Recurring Account example ---\n";
    RecurringAcc ra(102, "Raj", 5000.0f, 1000, 12);
    ra.display();

    return 0;
}
