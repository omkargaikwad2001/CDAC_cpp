#include "Complex.h"

int main()
{
    Complex c1(2, 3);
    Complex c2;

    cout << "\nInitial values:" << endl;
    cout << "c1 = " << c1 << endl;

    // 1. c2 = c1++
    c2 = c1++;
    cout << "\nAfter c2 = c1++" << endl;
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;

    // 2. c2 = ++c1
    c2 = ++c1;
    cout << "\nAfter c2 = ++c1" << endl;
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;

    // 3. c2 = -c1
    c2 = -c1;
    cout << "\nAfter c2 = -c1" << endl;
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;

    // 4. c2 = 5 + c1
    c2 = 5 + c1;
    cout << "\nAfter c2 = 5 + c1" << endl;
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;

    return 0;
}
