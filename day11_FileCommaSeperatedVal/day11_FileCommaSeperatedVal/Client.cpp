#include <iostream>
#include <fstream>
using namespace std;

struct Date {
    int day, month, year;
};

int main() {
    Date d1;

    // Take date from user
    cout << "Enter day: ";
    cin >> d1.day;
    cout << "Enter month: ";
    cin >> d1.month;
    cout << "Enter year: ";
    cin >> d1.year;

    // Write to file (CSV format)
    ofstream out("date.csv");
    if (!out) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }
    out << d1.day << "," << d1.month << "," << d1.year << endl;
    out.close();
    cout << "Date written to file successfully." << endl;

    // Read from file
    ifstream in("date.csv");
    if (!in) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    Date d2;
    char comma; // to consume commas
    in >> d2.day >> comma >> d2.month >> comma >> d2.year;
    in.close();

    cout << "Date read from file: " << d2.day << "-" << d2.month << "-" << d2.year << endl;

    return 0;
}
