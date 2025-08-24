//4. Write a program to declare character array.Accept the string from the user.Display the string in the reverse
//order without using any built - in function.
#include <iostream>
using namespace std;

int main() {
    char name[50];
    cout << "Enter a string: ";
    cin.getline(name, 50);

    // find length manually
    int size = 0;
    while (name[size] != '\0') {
        size++;
    }

    // print in reverse
    cout << "Reversed string: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << name[i];
    }
    cout << endl;

    return 0;
}
