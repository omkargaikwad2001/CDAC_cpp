#pragma once
#include "Cricketer.h"

class Batsman : public Cricketer {
    int balls;
    int runs;

public:
    Batsman();
    Batsman(const char* n, int a, int runsScored, float batAvg, int b, int r);
    void accept() override;
    void display() const override;
    void writeToFile(ofstream& out) const override;
    void readFromFile(ifstream& in) override;
};
