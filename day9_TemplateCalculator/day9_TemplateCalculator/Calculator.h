#pragma once
#include <iostream>
using namespace std;

template<class T>
class Calculator {
public:
    Calculator(T a, T b);
    T add();
    T sub();
    T mul();
    T div();

private:
    T no1;
    T no2;
};
