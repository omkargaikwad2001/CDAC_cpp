//3. Write a program to display whether a user entered number is prime or not.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is not prime";
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << num << " is prime";
    }
    else {
        cout << num << " is not prime";
    }

    return 0;
}
