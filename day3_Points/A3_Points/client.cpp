#include <iostream>
#include "Point.h"
using namespace std;

int main() {
    Point p1;         // default constructor ? (0,0)
    p1.showPoint();
    p1.checkQuadrant();

    Point p2(-1, 2);  // parameterized constructor
    p2.showPoint();
    p2.checkQuadrant();

    Point p3(3, -4);
    p3.showPoint();
    p3.checkQuadrant();

    return 0;
}
