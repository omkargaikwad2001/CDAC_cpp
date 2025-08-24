//6) Create structure of Student having following attributes
//1. Roll number
//2. name of student
//3. totalmarks of student.
//Accpet and Display data of 5 student.
//Display Student having maximum mark.

#include <iostream>
using namespace std;

struct Student {
    int rollnum;
    string name;
    float marks;
};

// Function prototypes
void accept(Student s[], int n);
void display(Student s[], int n);
void displayMax(Student s[], int n);

int main() {
    const int N = 5;
    Student s1[N];

    // Accept & Display
    accept(s1, N);
    display(s1, N);
    displayMax(s1, N);

    return 0;
}

void accept(Student s[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nEnter roll number of student " << i + 1 << " : ";
        cin >> s[i].rollnum;

        cout << "Enter name of student " << i + 1 << " : ";
        cin >> s[i].name;

        cout << "Enter marks of student " << i + 1 << " : ";
        cin >> s[i].marks;
    }
}

void display(Student s[], int n) {
    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Roll number = " << s[i].rollnum << endl;
        cout << "Name        = " << s[i].name << endl;
        cout << "Marks       = " << s[i].marks << endl << endl;
    }
}

void displayMax(Student s[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }

    cout << "--- Student with Maximum Marks ---\n";
    cout << "Roll number = " << s[maxIndex].rollnum << endl;
    cout << "Name        = " << s[maxIndex].name << endl;
    cout << "Marks       = " << s[maxIndex].marks << endl;
}

