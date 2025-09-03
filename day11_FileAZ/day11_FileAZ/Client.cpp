#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Step 1: Write characters 'A' to 'Z' to a file
    ofstream out("alphabets.txt");
    if (!out) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    for (char ch = 'A'; ch <= 'Z'; ch++) {
        out << ch;
    }
    out.close();
    cout << "Characters A-Z written to file." << endl;

    // Step 2: Read the file and display contents
    ifstream in("alphabets.txt");
    if (!in) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    char ch;
    cout << "Contents of file: ";
    while (in.get(ch)) {   // read character by character
        cout << ch << " ";
    }
    in.close();

    cout << endl;
    return 0;
}
