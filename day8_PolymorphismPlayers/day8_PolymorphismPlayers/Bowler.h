#pragma once
#include "Cricketer.h"

class Bowler : public Cricketer {
    int balls;
    int runs;
    int wkts;

public:
    Bowler();
    Bowler(const char* n, int a, int runsScored, float batAvg, int b, int r, int w);
    void accept() override;
    void display() const override;
    void writeToFile(ofstream& out) const override;
    void readFromFile(ifstream& in) override;
};
