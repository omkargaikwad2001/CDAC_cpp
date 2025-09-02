#pragma once
#include <iostream>
using namespace std;

class MyString {

private:
    char* str;

public:
    // Constructors & Destructor
    MyString();                        // Default constructor
    MyString(const char* s);           // Parameterized constructor
    ~MyString();                       // Destructor

    // Assignment operator
    MyString& operator=(const MyString& other);

    friend ostream& operator<<(ostream& out, const MyString& s);

    void display() const;
};