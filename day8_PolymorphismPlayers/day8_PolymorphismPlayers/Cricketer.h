#pragma once
#include "Player.h"

class Cricketer : public Player {
protected:
    int runScored;
    float battingAvg;
    int wicketTaken;
    float bowlingAvg;

public:
    Cricketer();
    Cricketer(const char* n, int a, int runs, float batAvg, int wkts, float bowlAvg);
    void accept() override;
    void display() const override;
    void writeToFile(ofstream& out) const override;
    void readFromFile(ifstream& in) override;
    virtual ~Cricketer() {}
};
