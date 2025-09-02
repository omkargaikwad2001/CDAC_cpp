#include "Batsman.h"
#include <iostream>
using namespace std;

Batsman::Batsman() : balls(0), runs(0) {}
Batsman::Batsman(const char* n, int a, int runsScored, float batAvg, int b, int r)
    : Cricketer(n, a, runsScored, batAvg, 0, 0), balls(b), runs(r) {
}

void Batsman::accept() {
    Cricketer::accept();
    cout << "Enter balls faced: ";
    cin >> balls;
    cout << "Enter runs scored: ";
    cin >> runs;
}

void Batsman::display() const {
    Cricketer::display();
    cout << "Balls Faced: " << balls << endl;
    cout << "Runs Scored: " << runs << endl;
}

void Batsman::writeToFile(ofstream& out) const {
    out.write((char*)this, sizeof(Batsman));
}

void Batsman::readFromFile(ifstream& in) {
    in.read((char*)this, sizeof(Batsman));
}
