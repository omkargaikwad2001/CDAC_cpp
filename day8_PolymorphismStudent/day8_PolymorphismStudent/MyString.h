#pragma once
#include <iostream>
using namespace std;

class MyString {
    char str[50];
public:
    MyString();
    MyString(const char* s);
    void accept();      
    void display() const;
};
