#include "Researcher.h"
#include <iostream>
using namespace std;

int main() {
    Researcher r;
    cout << "--- Enter Researcher Details ---\n";
    r.accept();

    cout << "\n--- Researcher Info ---\n";
    r.display();

    return 0;
}
