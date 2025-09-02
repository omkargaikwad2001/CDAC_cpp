#include "Footballer.h"
#include <iostream>
using namespace std;

Footballer::Footballer() : goalScore(0), scoringAvg(0) {}
Footballer::Footballer(const char* n, int a, int goals, float avg)
    : Player(n, a), goalScore(goals), scoringAvg(avg) {
}

void Footballer::accept() {
    Player::accept();
    cout << "Enter goals scored: ";
    cin >> goalScore;
    cout << "Enter scoring average: ";
    cin >> scoringAvg;
}

void Footballer::display() const {
    Player::display();
    cout << "Goals Scored: " << goalScore << endl;
    cout << "Scoring Avg: " << scoringAvg << endl;
}

void Footballer::writeToFile(ofstream& out) const {
    out.write((char*)this, sizeof(Footballer));
}

void Footballer::readFromFile(ifstream& in) {
    in.read((char*)this, sizeof(Footballer));
}
