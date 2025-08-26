#include<iostream>
#include "Array.h"
using namespace std;

int main() {
    Array a1(5), a2(5);

    // input using >>
    cin >> a1;
    cin >> a2;

    // display using <<
    cout << "a1 = " << a1 << endl;
    cout << "a2 = " << a2 << endl;

    // [] operator
    cout << "a1[2] = " << a1[2] << endl;
    a1[2] = 99;  // modify element
    cout << "After modification, a1 = " << a1 << endl;

    // + operator
    Array a3 = a1 + a2;
    cout << "a3 = a1 + a2 => " << a3 << endl;

    return 0;
}
