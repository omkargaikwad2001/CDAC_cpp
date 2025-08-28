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
    ~MyString();                       // Destructor

    // Assignment operator
    MyString& operator=(const MyString& other);

    friend ostream& operator<<(ostream& out, const MyString& s);

    void display() const;
};