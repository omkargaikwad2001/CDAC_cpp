#include "MyString.h"
#include <iostream>
#include <cstring>
using namespace std;


MyString::MyString() {
    str = new char[1];
    str[0] = '\0';
}


MyString::MyString(const char* s) {
    int length = strlen(s);
    str = new char[length + 1];
    strcpy_s(str, length + 1, s);   
}


MyString::MyString(const MyString& other) {
    int length = strlen(other.str);
    str = new char[length + 1];
    strcpy_s(str, length + 1, other.str);
}


MyString::~MyString() {
    delete[] str;
}


MyString& MyString::operator=(const MyString& other) {
    if (this != &other) {
        delete[] str;
        int length = strlen(other.str);
        str = new char[length + 1];
        strcpy_s(str, length + 1, other.str);
    }
    return *this;
}


ostream& operator<<(ostream& os, const MyString& obj) {
    os << obj.str;
    return os;
}


void MyString::display() const {
    cout << str << " (Length: " << strlen(str) << ")" << endl;
}
