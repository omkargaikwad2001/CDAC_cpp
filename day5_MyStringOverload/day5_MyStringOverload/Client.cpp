#include "MyString.h"
#include <iostream>
using namespace std;

int main() {
    MyString s1("Hello");
    MyString s2(" World");
    MyString s3;

    // 1. Concatenation
    s3 = s1 + s2;
    cout << "s1 + s2 = " << s3 << endl;

    // 2. Equality
    if (s1 == s2)
        cout << "s1 and s2 are equal" << endl;
    else
        cout << "s1 and s2 are NOT equal" << endl;

    // 3. Index access
    cout << "s1[4] = " << s1[4] << endl;

    return 0;
}
