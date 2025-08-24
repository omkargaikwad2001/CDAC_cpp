//7) Accpet array size from user, create array with dynamic memory allocation.Implement following functions
//1. Accept array
//2. Display array
//3. find Max, min;
//4. search specific element in array.
//5. Count even and odd numbers with one function and print values in main(use reference)

#include <iostream>
using namespace std;

// Function prototypes
void accept(int arr[], int n);
void display(int arr[], int n);
int findMax(int arr[], int n);
int findMin(int arr[], int n);
int search(int arr[], int n, int key);
void countEvenOdd(int arr[], int n, int& even, int& odd);

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    // Dynamic memory allocation
    int* arr = new int[n];

    // Accept and display
    accept(arr, n);
    display(arr, n);

    // Find max and min
    cout << "Maximum element = " << findMax(arr, n) << endl;
    cout << "Minimum element = " << findMin(arr, n) << endl;

    // Search element
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    int pos = search(arr, n, key);
    if (pos != -1)
        cout << key << " found at index " << pos << endl;
    else
        cout << key << " not found!" << endl;

    // Count even & odd
    int even = 0, odd = 0;
    countEvenOdd(arr, n, even, odd);
    cout << "Even numbers = " << even << endl;
    cout << "Odd numbers  = " << odd << endl;

    // Free memory
    delete[] arr;

    return 0;
}

// Function Definitions
void accept(int arr[], int n) {
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void display(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int findMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > maxVal)
            maxVal = arr[i];
    return maxVal;
}

int findMin(int arr[], int n) {
    int minVal = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < minVal)
            minVal = arr[i];
    return minVal;
}

int search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;  // return index
    return -1; // not found
}

void countEvenOdd(int arr[], int n, int& even, int& odd) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
}
