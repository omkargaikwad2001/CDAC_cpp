#pragma once
#include <iostream>
using namespace std;

class MyString {
private:
    char* str;

public:
    MyString();
    MyString(const char* s);
    MyString(const MyString& other);
    ~MyString();

    MyString& operator=(const MyString& other);
    friend ostream& operator<<(ostream& out, const MyString& s);

    void display() const;
};
