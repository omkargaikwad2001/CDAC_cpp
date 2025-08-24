//5) Write a program to allocate memory in C++ for 2D array.Accept row and col size from  user and accept and display values.
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Allocate memory for rows (array of pointers)
    int** arr = new int* [rows];

    // Allocate memory for each row (columns)
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    // Accept values
    cout << "Enter elements of the 2D array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Display values
    cout << "\nThe 2D array is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
