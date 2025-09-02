#pragma once
#include <iostream>

class MyString {
private:
    char* str;

public:
    // Constructors & Destructor
    MyString();
    MyString(const char* s);
    MyString(const MyString& other);
    ~MyString();

    // Assignment operator
    MyString& operator=(const MyString& other);

    // Operator overloads
    MyString operator+(const MyString& other) const;
    bool operator==(const MyString& other) const;
    char& operator[](int index);

    // Output operator
    friend std::ostream& operator<<(std::ostream& out, const MyString& s);

    void display() const;
};
