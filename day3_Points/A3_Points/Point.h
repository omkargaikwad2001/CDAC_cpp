#include<iostream>
using namespace std;
class Point {
private:
    int x, y;

public:
    Point();                  // default constructor
    Point(int, int);          // parameterized constructor
    void showPoint();         // display point
    void checkQuadrant();     // check quadrant
};