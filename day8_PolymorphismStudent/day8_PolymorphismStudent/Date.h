#pragma once
#include <iostream>
using namespace std;

class Date {
    int day, month, year;
public:
    Date();
    Date(int d, int m, int y);
    void accept();
    void display() const;
};
