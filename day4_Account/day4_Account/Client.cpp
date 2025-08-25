#include "Account.h"

int main() {
    Account a1("Omkar", 10000);
    Account a2("Rahul", 20000);

    cout << "=== Initial Interest Rate 5% ===" << endl;
    a1.display();
    a2.display();

    cout << "\nUpdating Interest Rate to 10%...\n" << endl;
    Account::updateIntRate(10.0);  // change static variable

    cout << "=== After Updating Interest Rate ===" << endl;
    a1.display();
    a2.display();

    return 0;
}