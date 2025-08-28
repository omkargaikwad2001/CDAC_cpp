#include "Date.h"

class Student {
public:
    Student();                                       // default constructor
    Student(const char* nm, int d, int m, int y);    // parameterized constructor
    void accept();                                   // take input
    void display();                                  // display data

private:
    int roll_num;            // auto-generated roll number
    char name[30];           // student name
    Date dateOfBirth;        // date of birth
    static int counter;      // static counter for roll numbers
};
