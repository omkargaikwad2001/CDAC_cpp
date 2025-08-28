#include <iostream>
#include "SavingsAccount.h"
#include "CurrentAccount.h"
using namespace std;

int main() {
    int choice;
    do {
        cout << "\n--- Bank Menu ---\n";
        cout << "1. Create Savings Account\n";
        cout << "2. Create Current Account\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            SavingsAccount sa;
            sa.accept();
            cout << "\n--- Savings Account Details ---\n";
            sa.display();
        }
        else if (choice == 2) {
            CurrentAccount ca;
            ca.accept();
            cout << "\n--- Current Account Details ---\n";
            ca.display();
        }
        else if (choice == 3) {
            cout << "Exiting...\n";
        }
        else {
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 3);

    return 0;
}
