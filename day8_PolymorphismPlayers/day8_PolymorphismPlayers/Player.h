#pragma once
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Player {
protected:
    char name[50];
    int age;

public:
    Player();
    Player(const char* n, int a);
    virtual void accept();
    virtual void display() const;
    virtual void writeToFile(ofstream& out) const = 0;
    virtual void readFromFile(ifstream& in) = 0;
    virtual ~Player() {}
};
