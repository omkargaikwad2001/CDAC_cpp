#include "stack.cpp"
#include "Complex.h"

int main() {
    Stack<int> s1;
    s1.Push(10);
    s1.Push(20);
    s1.Display();
    cout << "Popped: " << s1.Pop() << endl;
    s1.Display();

    Stack<double> s2;
    s2.Push(1.1);
    s2.Push(2.2);
    s2.Display();

    Stack<Complex> s3;
    s3.Push(Complex(3, 4));
    s3.Push(Complex(5, 6));
    s3.Display();

    return 0;
}
