#include "Cricketer.h"
#include <iostream>
using namespace std;

Cricketer::Cricketer() : runScored(0), battingAvg(0), wicketTaken(0), bowlingAvg(0) {}
Cricketer::Cricketer(const char* n, int a, int runs, float batAvg, int wkts, float bowlAvg)
    : Player(n, a), runScored(runs), battingAvg(batAvg), wicketTaken(wkts), bowlingAvg(bowlAvg) {
}

void Cricketer::accept() {
    Player::accept();
    cout << "Enter runs scored: ";
    cin >> runScored;
    cout << "Enter batting average: ";
    cin >> battingAvg;
    cout << "Enter wickets taken: ";
    cin >> wicketTaken;
    cout << "Enter bowling average: ";
    cin >> bowlingAvg;
}

void Cricketer::display() const {
    Player::display();
    cout << "Runs Scored: " << runScored << endl;
    cout << "Batting Avg: " << battingAvg << endl;
    cout << "Wickets Taken: " << wicketTaken << endl;
    cout << "Bowling Avg: " << bowlingAvg << endl;
}

void Cricketer::writeToFile(ofstream& out) const {
    out.write((char*)this, sizeof(Cricketer));
}

void Cricketer::readFromFile(ifstream& in) {
    in.read((char*)this, sizeof(Cricketer));
}
