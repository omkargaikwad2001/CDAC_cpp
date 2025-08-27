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
    strcpy_s(str, length + 1, s);  // safe copy
}

// 3. Copy constructor
MyString::MyString(const MyString& other) {
    length = other.length;
    str = new char[length + 1];
    strcpy_s(str, length + 1, other.str);
}

// 4. Destructor
MyString::~MyString() {
    delete[] str;
}

// Assignment operator
MyString& MyString::operator=(const MyString& other) {
    if (this != &other) { //check if not pointing to same memory
        delete[] str; // free old memory
        length = other.length;
        str = new char[length + 1];
        strcpy_s(str, length + 1, other.str);
    }
    return *this; //return reference for chaining or assigning
}

// Concatenation (s1 + s2)
MyString MyString::operator+(const MyString& other) const {
    MyString temp;
    delete[] temp.str; // free default '\0'

    temp.length = this->length + other.length;
    temp.str = new char[temp.length + 1];

    strcpy_s(temp.str, temp.length + 1, this->str);
    strcat_s(temp.str, temp.length + 1, other.str);

    return temp;
}

// Equality check (s1 == s2)
bool MyString::operator==(const MyString& other) const {
    return strcmp(this->str, other.str) == 0;
}

// Index operator
char& MyString::operator[](int index) {
    if (index < 0 || index >= length) {
        cout << "Index out of range! Returning first character." << endl;
        return str[0];
    }
    return str[index];
}

// Output operator
ostream& operator<<(ostream& out, const MyString& s) {
    out << s.str;
    return out;
}

// Display function
void MyString::display() const {
    cout << str << " (Length: " << length << ")" << endl;
}
