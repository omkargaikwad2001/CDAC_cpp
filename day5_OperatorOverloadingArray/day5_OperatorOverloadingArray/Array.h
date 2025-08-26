#include <iostream>
using namespace std;

class Array {

public:
    // default constructor
    Array();

    // parameterized constructor
    Array(int);

    // copy constructor
    Array(const Array&);

    // destructor
    ~Array();

    // overloaded [] operator
    int& operator[](int index);

    // overloaded + operator (element-wise addition)
    Array operator+(const Array& other);

    // overloaded >> (input) friend
    friend istream& operator>>(istream& in, Array& a);

    // overloaded << (output) friend
    friend ostream& operator<<(ostream& out, const Array& a);

    // helper methods
    void display();
    void accept();

private:
    int size = 5;
    int* arr = NULL;
};
