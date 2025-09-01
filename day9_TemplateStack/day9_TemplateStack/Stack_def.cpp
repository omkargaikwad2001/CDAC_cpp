#include "Stack.h"

template <class T>
Stack<T>::Stack(int s) {
    
}

template <class T>
Stack<T>::~Stack() {
    delete[] ptr;
}

template <class T>
void Stack<T>::push(const T& value) {
    if (top == size - 1) {
        cout << "Stack overflow! Cannot push " << value << endl;
        return;
    }
    ptr[++top] = value;
}

template <class T>
T Stack<T>::pop() {
    if (top == -1) {
        cout << "Stack underflow! Nothing to pop.\n";
        return T(); 
    }
    return ptr[top--];
}

template <class T>
void Stack<T>::display() const {
    if (top == -1) {
        cout << "Stack is empty.\n";
        return;
    }
    cout << "Stack elements (top to bottom): ";
    for (int i = top; i >= 0; i--) {
        cout << ptr[i] << " ";
    }
    cout << endl;
}

template class Stack<int>;
template class Stack<double>;
template class Stack<char>;
