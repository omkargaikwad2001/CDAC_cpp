#include <iostream>
#include "SavingAcc.h"
#include "RecurringAcc.h"
using namespace std;

int main() {
    Account* ptr[3];

    for (int i = 0; i < 3; i++) {
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
        cin.ignore();                  // To clear newline in buffer
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
            cout << "Invalid input. Defaulting to Saving Account." << endl;
            ptr[i] = new SavingAcc(0, "Default", 0.00);
            break;
        }
    }

    cout << "\n--- Account Details ---\n";
    for (int i = 0; i < 3; i++) {
        ptr[i]->display();
        cout << "Net Balance (with interest): " << ptr[i]->cal_NetBalance() << endl;
        cout << "---------------------------\n";
    }

    for (int i = 0; i < 3; i++) {
        delete ptr[i];
    }

    return 0;
}
