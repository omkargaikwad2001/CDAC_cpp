#include "Footballer.h"
#include "Cricketer.h"
#include "Batsman.h"
#include "Bowler.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    Player* players[3];

    cout << "--- Enter Player Details ---\n";
    for (int i = 0; i < 3; i++) {
        int choice;
        cout << "Enter 1: Footballer, 2: Cricketer, 3: Batsman, 4: Bowler: ";
        cin >> choice;

        switch (choice) {
        case 1: players[i] = new Footballer(); break;
        case 2: players[i] = new Cricketer(); break;
        case 3: players[i] = new Batsman(); break;
        case 4: players[i] = new Bowler(); break;
        default: cout << "Invalid choice"; i--; continue;
        }

        cin.ignore();
        players[i]->accept();
    }

    // Write to file
    ofstream out("players.dat", ios::binary);
    for (int i = 0; i < 3; i++)
        players[i]->writeToFile(out);
    out.close();

    cout << "\n--- Player Details from File ---\n";
    ifstream in("players.dat", ios::binary);
    for (int i = 0; i < 3; i++) {
        players[i]->readFromFile(in);
        players[i]->display();
        cout << "-------------------\n";
    }
    in.close();

    for (int i = 0; i < 3; i++) delete players[i];
    return 0;
}
