//4) Write a program in C++ to accept number of subjects from user for 1 student and accept marks of all subjects.Display sum and average.
#include<iostream>
using namespace std;
int main() {
	
	int numOfSubjects;
	cout << "Enter number of subjects : ";
	cin >> numOfSubjects;

	int* arr = new int[numOfSubjects];

	int sum = 0;
	for (int i = 0; i < numOfSubjects; i++){
		cout << "Enter marks of " << i + 1 << " subject : ";
		cin >> arr[i];

		sum += arr[i];
	}

	cout << "Sum = " << sum << endl;
	cout << "Avg = " << (float)sum/numOfSubjects << endl;

	delete[] arr;


	return 0;
}