#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Stack {
    T arr[5];     
    int top;      

public:
    Stack();             
    void Push(T);        
    T Pop();             
    void Display();      
};
