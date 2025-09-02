#pragma once
#include "Player.h"

class Footballer : public Player {
    int goalScore;
    float scoringAvg;

public:
    Footballer();
    Footballer(const char* n, int a, int goals, float avg);
    void accept() override;
    void display() const override;
    void writeToFile(ofstream& out) const override;
    void readFromFile(ifstream& in) override;
    ~Footballer() {}
};
#pragma once
