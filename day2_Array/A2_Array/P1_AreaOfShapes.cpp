//1) Write a menu driven program to calculate area and circumference / perimeter of circle, square, triangle, rectangle and prfloat both results in main.Use const keyword for PI(use pass by reference mechanism)
#include <iostream>
using namespace std;

const float PI = 3.14;

void calculateCircle(float&, float&, float&);
void calculateSquare(float&, float&, float&);
void calculateTriangle(float&, float&, float&, float&, float&, float&, float&);
void calculateRectangle(float&, float&, float&, float&);

int main() {

    cout << "Calculate area and circumference/perimeter of circle, square, triangle, rectangle" << endl;
    cout << "Enter 1 to calculate for circle" << endl;
    cout << "Enter 2 to calculate for square" << endl;
    cout << "Enter 3 to calculate for triangle" << endl;
    cout << "Enter 4 to calculate for rectangle" << endl;

    int choice;
    cin >> choice;

    switch (choice) {

    case 1: {
        cout << "Calculating for circle" << endl;
        float radius;
        cout << "Enter radius of circle: ";
        cin >> radius;

        float areaOfCircle, circumferenceOfCircle;
        calculateCircle(radius, areaOfCircle, circumferenceOfCircle);

        cout << "Area of circle = " << areaOfCircle << endl;
        cout << "Circumference of circle = " << circumferenceOfCircle << endl;
        break;
    }

    case 2: {
        cout << "Calculating for square" << endl;
        float length;
        cout << "Enter length of square: ";
        cin >> length;

        float areaOfSquare, circumferenceOfSquare;
        calculateSquare(length, areaOfSquare, circumferenceOfSquare);

        cout << "Area of square = " << areaOfSquare << endl;
        cout << "Circumference of square = " << circumferenceOfSquare << endl;
        break;
    }

    case 3: {
        cout << "Calculating for triangle" << endl;
        float base, height, s1, s2, s3;
        cout << "Enter base: "; cin >> base;
        cout << "Enter height: "; cin >> height;
        cout << "Enter side 1: "; cin >> s1;
        cout << "Enter side 2: "; cin >> s2;
        cout << "Enter side 3: "; cin >> s3;

        float areaOfTriangle, circumferenceOfTriangle;
        calculateTriangle(base, height, s1, s2, s3, areaOfTriangle, circumferenceOfTriangle);

        cout << "Area of triangle = " << areaOfTriangle << endl;
        cout << "Circumference of triangle = " << circumferenceOfTriangle << endl;
        break;
    }

    case 4: {
        cout << "Calculating for rectangle" << endl;
        float len, width;
        cout << "Enter length: "; cin >> len;
        cout << "Enter width: "; cin >> width;

        float areaOfRectangle, circumferenceOfRectangle;
        calculateRectangle(len, width, areaOfRectangle, circumferenceOfRectangle);

        cout << "Area of rectangle = " << areaOfRectangle << endl;
        cout << "Circumference of rectangle = " << circumferenceOfRectangle << endl;
        break;
    }

    default:
        cout << "Invalid input" << endl;
        break;
    }

    return 0;
}

void calculateCircle(float& radius, float& areaOfCircle, float& circumferenceOfCircle) {
    areaOfCircle = PI * radius * radius;
    circumferenceOfCircle = 2 * PI * radius;
}

void calculateSquare(float& length, float& areaOfSquare, float& circumferenceOfSquare) {
    areaOfSquare = length * length;
    circumferenceOfSquare = 4 * length;
}

void calculateTriangle(float& base, float& height, float& s1, float& s2, float& s3, float& areaOfTriangle, float& circumferenceOfTriangle) {
    areaOfTriangle = 0.5f * base * height;
    circumferenceOfTriangle = s1 + s2 + s3;
}

void calculateRectangle(float& length, float& width, float& areaOfRectangle, float& circumferenceOfRectangle) {
    areaOfRectangle = length * width;
    circumferenceOfRectangle = 2 * (length + width);
}
