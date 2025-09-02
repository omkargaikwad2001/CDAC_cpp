#include "MyString.h"
#include <iostream>
#include <cstring>
using namespace std;

MyString::MyString() {
    strcpy_s(str, sizeof(str), "");
}

MyString::MyString(const char* s) {
    strcpy_s(str, sizeof(str), s);
}

void MyString::accept() {
    cin.getline(str, sizeof(str));
}

void MyString::display() const {
    cout << str;
}
