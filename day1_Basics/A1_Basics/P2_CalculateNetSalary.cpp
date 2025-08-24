//2. Write a program to calculate Net Salary of an employee.Accept Basic Salary(BS) from the user.
//HRA is 15 % of BS
//DA is 30 % of BS  
//PF is 12.5 % of GS
//Gross Salary is BS + HRA + DA  
//Net Salary = Gross Salary – PF
#include <iostream>
using namespace std;

int main() {
    double bs;
    cout << "Enter Basic Salary: ";
    cin >> bs;

    double hra = bs * 15 / 100.0;
    double da = bs * 30 / 100.0;
    double gs = bs + hra + da;
    double pf = gs * 12.5 / 100.0;
    double ns = gs - pf;

    cout << "Net Salary = " << ns << endl;

    return 0;
}
