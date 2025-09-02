
#pragma once
#include <iostream>
using namespace std;

class Date {
public:
    Date();
    Date(int, int, int);
    void accept();
    void display() const;

private:
    int day;
    int month;
    int year;
};
