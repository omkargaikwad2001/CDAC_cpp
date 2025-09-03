#include "MyString.h"
#include <iostream>
#include <cstring>
using namespace std;

MyString::MyString() {
    size = 0;
    name = new char[1];
    *name = '\0';
}

MyString::MyString(const char str[]) {
    size = strlen(str);
    name = new char[size + 1];
    strcpy_s(name, size + 1, str);
}

MyString::MyString(const MyString& obj) {
    size = strlen(obj.name);
    name = new char[size + 1];
    strcpy_s(name, size + 1, obj.name);
}

MyString::~MyString() {
    if (name) {
        delete[] name;
    }
    name = nullptr;
}

void MyString::display() {
    cout << "Name : " << name << endl;
}
