#include <iostream>
using namespace std;

class MyString {

private:
    int length;
    char* str;

public:
    // Constructors & Destructor
    MyString();                        // Default constructor
    MyString(const char* s);           // Parameterized constructor
    MyString(const MyString& other);   // Copy constructor
    ~MyString();                       // Destructor

    // Assignment operator
    MyString& operator=(const MyString& other);

    // Operator overloads
    MyString operator+(const MyString& other) const; // s1 + s2
    bool operator==(const MyString& other) const;    // s1 == s2
    char& operator[](int index);                     // s1[index]

    // Output operator
    friend ostream& operator<<(ostream& out, const MyString& s);

    void display() const;
};