#include <iostream>
#include "Point.h"
using namespace std;

Point::Point() {
    x = 0;
    y = 0;
    cout << "Default Constructor called" << endl;
}

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

void Point::showPoint() {
    cout << "[" << x << ", " << y << "]" << endl;
}

void Point::checkQuadrant() {
    if (x > 0 && y > 0)
        cout << "I Quadrant" << endl;
    else if (x < 0 && y > 0)
        cout << "II Quadrant" << endl;
    else if (x < 0 && y < 0)
        cout << "III Quadrant" << endl;
    else if (x > 0 && y < 0)
        cout << "IV Quadrant" << endl;
    else if (x == 0 && y == 0)
        cout << "Origin" << endl;
    else if (x == 0)
        cout << "On Y-axis" << endl;
    else if (y == 0)
        cout << "On X-axis" << endl;
}
