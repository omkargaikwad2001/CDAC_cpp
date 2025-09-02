#pragma once
#include <iostream>

class MyString {
private:
    char* str;

public:
    
    MyString();                        
    MyString(const char* s);           
    MyString(const MyString& other);   
    ~MyString();                       

    
    MyString& operator=(const MyString& other);

    
    friend std::ostream& operator<<(std::ostream& os, const MyString& obj);

    
    void display() const;
};
