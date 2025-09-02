#include "MyString.h"
#include <iostream>
#include <cstring>
#include <stdexcept>
using namespace std;

MyString::MyString() {
    str = new char[1];
    str[0] = '\0';
}

MyString::MyString(const char* s) {
    size_t len = strlen(s);
    str = new char[len + 1];
    strcpy_s(str, len + 1, s);
}

MyString::MyString(const MyString& other) {
    size_t len = strlen(other.str);
    str = new char[len + 1];
    strcpy_s(str, len + 1, other.str);
}

MyString::~MyString() {
    delete[] str;
}

MyString& MyString::operator=(const MyString& other) {
    if (this != &other) {
        delete[] str;
        size_t len = strlen(other.str);
        str = new char[len + 1];
        strcpy_s(str, len + 1, other.str);
    }
    return *this;
}

MyString MyString::operator+(const MyString& other) const {
    size_t len1 = strlen(str);
    size_t len2 = strlen(other.str);
    size_t totalLen = len1 + len2;

    char* buffer = new char[totalLen + 1];
    strcpy_s(buffer, totalLen + 1, str);
    strcat_s(buffer, totalLen + 1, other.str);

    MyString temp(buffer); // constructor copies
    delete[] buffer;       // safe to free the temporary buffer

    return temp;
}

bool MyString::operator==(const MyString& other) const {
    return strcmp(str, other.str) == 0;
}

char& MyString::operator[](int index) {
    size_t len = strlen(str);
    if (index < 0 || index >= static_cast<int>(len)) {
        throw out_of_range("Index out of range");
    }
    return str[index];
}

ostream& operator<<(ostream& out, const MyString& s) {
    out << s.str;
    return out;
}

void MyString::display() const {
    cout << str << " (Length: " << strlen(str) << ")" << endl;
}
