//6. Write a program to swap two variables using a third variable.Write a separate swap function.Display the variables in main function and swap function.
//a.Implement swap function as call by value
//b.Implement swap function as call by address
#include<iostream>
using namespace std;

void swapByValue(int,int);
void swapByAddress(int*, int*);

int main() {

	int num1, num2;
	cout << "Enter num1 and num2 ";
	cin >> num1>>num2;
	
	cout << "Using Call by value\n";
	cout << "Before num1 = " << num1 << " and num2 = " << num2<<endl;
	swapByValue(num1, num2);
	cout << "After num1 = " << num1 << " and num2 = " << num2 << endl;
	cout << "********************"<<endl;

	cout << "Using Call by address\n";
	cout << "Before num1 = " << num1 << " and num2 = " << num2 << endl;
	swapByAddress(&num1, &num2);
	cout << "After num1 = " << num1 << " and num2 = " << num2 << endl;

	return 0;
}

void swapByValue(int num1, int num2) {

	int temp = num1;
	num1 = num2;
	num2 = temp;

}

void swapByAddress(int* num1, int* num2) {

	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}
