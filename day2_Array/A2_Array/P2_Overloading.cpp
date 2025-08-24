//2) Write a menu driven program to calculate sum of numbers for int, float, or mix sequence i.e.use function overloading
#include<iostream>
using namespace std;

void sum(int, int);
void sum(float, float);
void sum(int, float);
void sum(float, int);

int main() {

	cout << "Calculate Sum" << endl;
	cout << "Enter 1 to add int int" << endl;
	cout << "Enter 2 to add float float" << endl;
	cout << "Enter 3 to add int float" << endl;
	cout << "Enter 4 to add float int" << endl;

	int choice;
	cout << "Enter choice\n";
	cin >> choice;

	switch (choice) {

	case 1:
		int n1, n2;
		cout << "Enter first number : ";
		cin >> n1;

		cout << "Enter second number : ";
		cin >> n2;

		sum(n1, n2);
		break;

	case 2:
		float n3, n4;
		cout << "Enter first number : ";
		cin >> n3;

		cout << "Enter second number : ";
		cin >> n4;

		sum(n3, n4);
		break;

	case 3:
		int n5; 
		float n6;
		
		cout << "Enter first number : ";
		cin >> n5;

		cout << "Enter second number : ";
		cin >> n6;

		sum(n5, n6);
		break;

	case 4:
		float n7;
		int n8;
		
		cout << "Enter first number : ";
		cin >> n7;

		cout << "Enter second number : ";
		cin >> n8;

		sum(n7, n8);
		break;

	default:
		cout << "Invalid input";
		break;

	}

	return 0;
}

void sum(int n1, int n2) {
	cout << "(int int) Sum = " << n1 + n2;
}

void sum(float n3, float n4) {
	cout << "(float float) Sum = " << n3 + n4;
}

void sum(int n5, float n6) {
	cout << "(int float) Sum = " << n5 + n6;
}

void sum(float n7, int n8) {
	cout << "(float int) Sum = " << n7 + n8;
}