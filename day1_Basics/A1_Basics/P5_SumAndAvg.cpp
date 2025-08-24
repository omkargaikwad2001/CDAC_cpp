//5. Write a program to accept marks of five subjects from the user and calculate their sum and average.
//Display sum and average on the console.
#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks of " << i + 1 << " subject: ";
        cin >> arr[i];
        sum += arr[i];
    }

    double avg = sum / 5.0;  // ensure floating point division

    cout << "Sum = " << sum << endl;
    cout << "Avg = " << avg << endl;

    return 0;
}
