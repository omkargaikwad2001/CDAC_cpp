#include <iostream>
#include "Calculator_def.cpp"
using namespace std;

int main() {
    int a, b;
    cout << "Testing with int:\nEnter two integers: ";
    cin >> a >> b;
    Calculator<int> calcInt(a, b);
    cout << "Add: " << calcInt.add() << "\nSub: " << calcInt.sub()
        << "\nMul: " << calcInt.mul() << "\nDiv: " << calcInt.div() << "\n\n";

    float fa, fb;
    cout << "Testing with float:\nEnter two floats: ";
    cin >> fa >> fb;
    Calculator<float> calcFloat(fa, fb);
    cout << "Add: " << calcFloat.add() << "\nSub: " << calcFloat.sub()
        << "\nMul: " << calcFloat.mul() << "\nDiv: " << calcFloat.div() << "\n\n";

    double da, db;
    cout << "Testing with double:\nEnter two doubles: ";
    cin >> da >> db;
    Calculator<double> calcDouble(da, db);
    cout << "Add: " << calcDouble.add() << "\nSub: " << calcDouble.sub()
        << "\nMul: " << calcDouble.mul() << "\nDiv: " << calcDouble.div() << "\n";

    return 0;
}
