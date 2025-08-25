#include "MyString.h"
#include <iostream>
#include <cstring>
using namespace std;

// 1. Default constructor
MyString::MyString() {
    length = 0;
    str = new char[1];
    str[0] = '\0';
}

// 2. Parameterized constructor
MyString::MyString(const char* s) {
    length = strlen(s);
    str = new char[length + 1];
    strcpy_s(str, length + 1, s);   // safer strcpy
}

// 3. Copy constructor
MyString::MyString(const MyString& other) {
    length = other.length;
    str = new char[length + 1];
    strcpy_s(str, length + 1, other.str);   // safer strcpy
}

// 4. Destructor
MyString::~MyString() {
    delete[] str;
}

// display function
void MyString::display() const {
    cout << str << " (Length: " << length << ")" << endl;
}
