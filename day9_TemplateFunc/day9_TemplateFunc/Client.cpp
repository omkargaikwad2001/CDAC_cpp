#include <iostream>
using namespace std;

template <class T>
void sortT(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    
    int choice,size;
    cout << "Enter 1 to sort int array\n";
    cout << "Enter 2 to sort float array\n";
    cout << "Enter 3 to sort char array\n";
    cout << "Enter 4 to sort double array\n\n";
    cin >> choice;

    cout << "Enter size of elements\n";
    cin >> size;

    switch (choice) {

    case  1: {

        int* arr = new int[size];
        for (int i = 0; i < size; i++) {
            cout << "Enter " << i + 1 << " element : ";
            cin >> arr[i];
        }

        sortT(arr, size);

        cout << "Sorted int array\n";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        delete[]arr;

        break;

    }

    case 2: {

        float* arr = new float[size];
        for (int i = 0; i < size; i++) {
            cout << "Enter " << i + 1 << " element : ";
            cin >> arr[i];
        }

        sortT(arr, size);

        cout << "Sorted float array\n";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        delete[]arr;

        break;

    }

    case 3: {

        char* arr = new char[size];
        for (int i = 0; i < size; i++) {
            cout << "Enter " << i + 1 << " element : ";
            cin >> arr[i];
        }

        sortT(arr, size);

        cout << "Sorted char array\n";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        delete[]arr;

        break;

    }

    case 4: {
    
        double* arr = new double[size];
        for (int i = 0; i < size; i++) {
            cout << "Enter " << i + 1 << " element : ";
            cin >> arr[i];
        }

        sortT(arr, size);

        cout << "Sorted double array\n";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        delete[]arr;

        break;

    }

    default:
        cout << "Invalid choice\n";
        break;
    }

    return 0;
}
