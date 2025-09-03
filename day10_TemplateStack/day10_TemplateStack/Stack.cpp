#include "stack.h"

template <typename T>
Stack<T>::Stack() {
    top = 0;
}

template <typename T>
void Stack<T>::Push(T a) {
    if (top == 5) {
        cout << "Stack is full!\n";
        return;
    }
    arr[top++] = a;
}

template <typename T>
T Stack<T>::Pop() {
    if (top == 0) {
        cout << "Stack is empty!\n";
        return T();   // return default constructed T
    }
    return arr[--top];
}

template <typename T>
void Stack<T>::Display() {
    if (top == 0) {
        cout << "Stack is empty!\n";
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i < top; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
