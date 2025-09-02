#include "Bowler.h"
#include <iostream>
using namespace std;

Bowler::Bowler() : balls(0), runs(0), wkts(0) {}
Bowler::Bowler(const char* n, int a, int runsScored, float batAvg, int b, int r, int w)
    : Cricketer(n, a, runsScored, batAvg, w, 0), balls(b), runs(r), wkts(w) {
}

void Bowler::accept() {
    Cricketer::accept();
    cout << "Enter balls bowled: ";
    cin >> balls;
    cout << "Enter runs given: ";
    cin >> runs;
    cout << "Enter wickets taken: ";
    cin >> wkts;
}

void Bowler::display() const {
    Cricketer::display();
    cout << "Balls Bowled: " << balls << endl;
    cout << "Runs Given: " << runs << endl;
    cout << "Wickets Taken: " << wkts << endl;
}

void Bowler::writeToFile(ofstream& out) const {
    out.write((char*)this, sizeof(Bowler));
}

void Bowler::readFromFile(ifstream& in) {
    in.read((char*)this, sizeof(Bowler));
}
