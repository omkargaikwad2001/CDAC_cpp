#include<iostream>
//#include"Account.h"
#include"SavingAcc.h"
#include"RecurringAcc.h";
using namespace std;
int main() {

	/*Account a;
	a.display();
	cout << endl << endl;

	Account a1(111, "Omkar", 56.56);
	a1.display();*/

	/*SavingAcc s;
	s.display();
	cout << endl << endl;
	*/

	/*SavingAcc s1(123, "Omkar og", 10000.00);
	s1.display();

	cout << endl << endl;

	RecurringAcc r1(123, "Omkar og", 10000.00,2000,10);
	r1.display();*/

	Account* ptr[3];

	for (int i = 0; i < 3; i++) {

		int choice;
		cout << "Enter 1 to show Saving Account Details" << endl;
		cout << "Enter 2 to show Recurring Account Details" << endl;
		cin >> choice;

		switch (choice) {

		case 1:

			ptr[i] = new SavingAcc(123, "Omkar og", 10000.00);
			//ptr[i]->display();
			cout << endl << endl;
			break;

		case 2:

			ptr[i] = new RecurringAcc(456, "Omkar og", 10000.00, 2000, 10);
			//ptr[i]->display();
			cout << endl << endl;
			break;

		default:
			cout << "Invalid input" << endl;
			break;
		}

	}

	for (int i = 0; i < 3; i++) {
		cout << ptr[i]->getAcc() << endl;
	}

	//for (int i = 0; i < 3; i++) {
	//	ptr[i]->display();
	//}
	//
	//delete []ptr;

	/*Account* aptr = new SavingAcc(123, "Omkar og", 10000.00);
	aptr->getIntrest();*/

	Account* aptr = new RecurringAcc(123, "Omkar og", 10000.00, 2000, 10);
	cout<<dynamic_cast<RecurringAcc*> (aptr)->getInstallationAmt();

	return 0;
}