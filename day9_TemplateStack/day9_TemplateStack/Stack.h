#pragma once
#include <iostream>
using namespace std;

template <class T>
class Stack {
    
    T arr[5];
    int top;

public:
    Stack();                         
    void push(T);
    T pop();
    void display();
};
