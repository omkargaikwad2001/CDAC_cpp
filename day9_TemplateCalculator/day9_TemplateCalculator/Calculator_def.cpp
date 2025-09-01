#include "Calculator.h"

template<class T>
Calculator<T>::Calculator(T a, T b) {
    no1 = a;
    no2 = b;
}

template<class T>
T Calculator<T>::add() { return no1 + no2; }

template<class T>
T Calculator<T>::sub() { return no1 - no2; }

template<class T>
T Calculator<T>::mul() { return no1 * no2; }

template<class T>
T Calculator<T>::div() {
    if (no2 == T()) {
        cout << "Error: Division by zero!" << endl;
        return T();
    }
    return no1 / no2;
}
