#include <iostream>
#include "SavingAccount.h"
#include "RecurringAcc.h"
using namespace std;

int main() {
    const int SIZE = 5;
    Account* accounts[SIZE];

    int savingCount = 0;
    int recurringCount = 0;

    // --- Create 5 accounts based on user input ---
    for (int i = 0; i < SIZE; i++) {
        int choice;
        cout << "\n--- Create Account " << (i + 1) << " ---" << endl;
        cout << "Enter 1 for Saving Account" << endl;
        cout << "Enter 2 for Recurring Account" << endl;
        cin >> choice;

        int accno;
        char name[50];
        float balance;

        cout << "Enter Account Number: ";
        cin >> accno;
        cout << "Enter Name: ";
        cin.ignore();                  // flush newline
        cin.getline(name, 50);
        cout << "Enter Balance: ";
        cin >> balance;

        switch (choice) {
        case 1:
            accounts[i] = new SavingAcc(accno, name, balance);
            savingCount++;
            break;

        case 2: {
            double instAmt;
            int noOfInst;
            cout << "Enter Installment Amount: ";
            cin >> instAmt;
            cout << "Enter Number of Installments: ";
            cin >> noOfInst;
            accounts[i] = new RecurringAcc(accno, name, balance, instAmt, noOfInst);
            recurringCount++;
            break;
        }

        default:
            cout << "Invalid input. Defaulting to Saving Account." << endl;
            accounts[i] = new SavingAcc(0, "Default", 0.00f);
            savingCount++;
            break;
        }
    }

    // --- Display details and call specific functionalities ---
    cout << "\n\n--- Account Details ---\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "\nAccount #" << (i + 1) << ":\n";
        accounts[i]->display();
        cout << "Net Balance: " << accounts[i]->cal_NetBalance() << endl;

        // Using static_cast to call specific functions
        if (i % 2 == 0) { // just to demo static_cast (choose based on something)
            SavingAcc* sa = static_cast<SavingAcc*>(accounts[i]);
            cout << "Interest Rate (via static_cast): " << sa->getIntrest() << endl;
        }
        else {
            RecurringAcc* ra = static_cast<RecurringAcc*>(accounts[i]);
            cout << "Installment Amount (via static_cast): " << ra->getInstallationAmt() << endl;
        }

        // Using dynamic_cast safely
        if (SavingAcc* sa = dynamic_cast<SavingAcc*>(accounts[i])) {
            cout << "Interest Rate (via dynamic_cast): " << sa->getIntrest() << endl;
        }
        else if (RecurringAcc* ra = dynamic_cast<RecurringAcc*>(accounts[i])) {
            cout << "Installment Amount (via dynamic_cast): " << ra->getInstallationAmt() << endl;
        }
    }

    cout << "\nNumber of Saving Accounts created: " << savingCount << endl;
    cout << "Number of Recurring Accounts created: " << recurringCount << endl;

    cout << "Total Account objects created (using static count): "
        << Account::getCount() << endl;

    // --- Free memory ---
    for (int i = 0; i < SIZE; i++) {
        delete accounts[i];
    }

    return 0;
}
