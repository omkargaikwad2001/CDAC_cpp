#include <iostream>
#include "SavingAcc.h"
#include "RecurringAcc.h"
using namespace std;

int main() {
    Account* ptr[3];

    for (int i = 0; i < 3; i++) {
        int choice;
        cout << "\n--- Create Account " << (i + 1) << " ---\n";
        cout << "Enter 1 for Saving Account\n";
        cout << "Enter 2 for Recurring Account\n";
        cin >> choice;

        int accno;
        char name[50];
        double balance;

        cout << "Enter Account Number: ";
        cin >> accno;
        cout << "Enter Name: ";
        cin.ignore();
        cin.getline(name, 50);
        cout << "Enter Balance: ";
        cin >> balance;

        switch (choice) {
        case 1:
            ptr[i] = new SavingAcc(accno, name, balance);
            break;

        case 2: {
            double instAmt;
            int noOfInst;
            cout << "Enter Installment Amount: ";
            cin >> instAmt;
            cout << "Enter Number of Installments: ";
            cin >> noOfInst;
            ptr[i] = new RecurringAcc(accno, name, balance, instAmt, noOfInst);
            break;
        }

        default:
            cout << "Invalid choice. Defaulting to Saving Account.\n";
            ptr[i] = new SavingAcc(0, "Default", 0.00);
            break;
        }
    }

    cout << "\n--- Account Details & Net Balances ---\n";
    for (int i = 0; i < 3; i++) {
        ptr[i]->display();
        cout << "Net Balance (with interest): " << ptr[i]->cal_NetBalance() << "\n";
        cout << "--------------------------------------\n";
    }

    cout << "\n--- Testing Derived Specific Function Calls ---\n";
    for (int i = 0; i < 3; i++) {
        // ❌ Following would fail if uncommented, since not in Account:
        // cout << ptr[i]->getInterest();
        // cout << ptr[i]->getInstallmentAmount();

        // ✅ Downcast safely
        if (SavingAcc* s = dynamic_cast<SavingAcc*>(ptr[i])) {
            cout << "SavingAcc Interest: " << s->getInterest() << "\n";
        }
        if (RecurringAcc* r = dynamic_cast<RecurringAcc*>(ptr[i])) {
            cout << "RecurringAcc Installment Amount: " << r->getInstallmentAmount() << "\n";
        }
    }

    for (int i = 0; i < 3; i++) {
        delete ptr[i];
    }

    return 0;
}
