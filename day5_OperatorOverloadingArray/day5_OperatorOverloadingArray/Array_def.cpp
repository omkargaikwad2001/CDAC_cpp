#include "Array.h"

// default constructor
Array::Array() {
    cout << "This is default constructor" << endl;
    arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = 0;
    }
}

// parameterized constructor
Array::Array(int size) {
    this->size = size;
    this->arr = new int[this->size];
    for (int i = 0; i < this->size; i++) {
        this->arr[i] = 0;
    }
}

// copy constructor
Array::Array(const Array& a) {
    cout << "User defined copy constructor called" << endl;
    this->size = a.size;
    this->arr = new int[this->size];
    for (int i = 0; i < this->size; i++)
        arr[i] = a.arr[i];
}

// destructor
Array::~Array() {
    cout << "destructor called" << endl;
    if (arr) {
        delete[] arr;
    }
    arr = NULL;
}

// overloaded [] operator
int& Array::operator[](int index) {
    if (index < 0 || index >= size) {
        cout << "Index out of range! Returning first element.\n";
        return arr[0]; // safeguard
    }
    return arr[index];
}

// overloaded + operator
Array Array::operator+(const Array& other) {
    int newSize = (size < other.size) ? size : other.size;
    Array temp(newSize);
    for (int i = 0; i < newSize; i++) {
        temp.arr[i] = this->arr[i] + other.arr[i];
    }
    return temp;
}

// overloaded >> operator
istream& operator>>(istream& in, Array& a) {
    cout << "Enter " << a.size << " elements: ";
    for (int i = 0; i < a.size; i++) {
        in >> a.arr[i];
    }
    return in;
}

// overloaded << operator
ostream& operator<<(ostream& out, const Array& a) {
    out << "[ ";
    for (int i = 0; i < a.size; i++) {
        out << a.arr[i] << " ";
    }
    out << "]";
    return out;
}

// helper
void Array::display() {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Array::accept() {
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}
