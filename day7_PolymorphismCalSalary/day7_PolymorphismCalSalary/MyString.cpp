#include "MyString.h"
#include <iostream>
#include <cstring>
using namespace std;

// Default constructor
MyString::MyString() {
    str = new char[1];
    str[0] = '\0';
}

// Parameterized constructor
MyString::MyString(const char* s) {
    int length = strlen(s);
    str = new char[length + 1];
    strcpy_s(str, length + 1, s);  // safe copy
}

ostream& operator<<(ostream& out, const MyString& s) {
    out << s.str;
    return out;
}

// MyString.cpp

MyString& MyString::operator=(const MyString& other) {
    if (this != &other) {
        delete[] str;
        int length = strlen(other.str);
        str = new char[length + 1];
        strcpy_s(str, length + 1, other.str);
    }
    return *this;
}


// Destructor
MyString::~MyString() {
    delete[] str;
}

// Display function
void MyString::display() const {
    cout << str << " (Length: " << strlen(str) << ")" << endl;
}
