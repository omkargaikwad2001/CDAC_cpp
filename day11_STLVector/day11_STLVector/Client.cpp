#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<int> marks(n);
    cout << "Enter marks: ";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    cout << "All marks: ";
    for (int m : marks) {
        cout << m << " ";
    }
    cout << endl;

    int highest = *max_element(marks.begin(), marks.end());
    int lowest = *min_element(marks.begin(), marks.end());

    cout << "Highest marks: " << highest << endl;
    cout << "Lowest marks: " << lowest << endl;

    int sum = 0;
    for (int m : marks) {
        sum += m;
    }
    double average = (double)sum / n;
    cout << "Average marks: " << average << endl;

    sort(marks.begin(), marks.end());
    cout << "Sorted marks (ascending): ";
    for (int m : marks) {
        cout << m << " ";
    }
    cout << endl;

    return 0;
}
