#include <iostream>
#include <string>
#include"MyString.h"
using namespace std;
#pragma once
class Account {

public:
    
    Account(MyString name, float balance);

    
    void display();

    
    static void updateIntRate(float rate);

    
    float getBalanceWithInterest();

private:
    int accNo;
    MyString name;
    float balance;

    static int nextAccNo;   
    static float int_rate; 
};
