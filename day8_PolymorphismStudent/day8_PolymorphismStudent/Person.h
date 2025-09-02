#pragma once
#include "MyString.h"
#include "Date.h"

class Person {
protected:
    MyString name;
    Date birthdate;
public:
    Person();
    Person(const char* n, int d, int m, int y);
    virtual void accept();
    virtual void display() const;
    virtual ~Person() {}
};
