#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers;
    int n;
    cout << "How many numbers you want to add initially? ";
    cin >> n;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        numbers.push_back(value);
    }

    int x;
    cout << "Enter number to insert at beginning: ";
    cin >> x;
    numbers.push_front(x);

    int y;
    cout << "Enter number to insert at end: ";
    cin >> y;
    numbers.push_back(y);

    int z;
    cout << "Enter number to remove: ";
    cin >> z;
    numbers.remove(z);

    cout << "Final list: ";
    for (int value : numbers) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
