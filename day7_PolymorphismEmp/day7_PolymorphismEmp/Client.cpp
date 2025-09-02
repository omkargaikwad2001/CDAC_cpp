#include "WageEmployee.h"
#include "SalesManager.h"
#include <iostream>
using namespace std;

int main() {
    Employee* e1 = new WageEmployee();    
    Employee* e2 = new SalesManager();    

    cout << "--- Accept WageEmployee ---" << endl;
    e1->accept();     
    cout << "\n--- Display WageEmployee ---" << endl;
    e1->display();    

    cout << "\n--- Accept SalesManager ---" << endl;
    e2->accept();     
    cout << "\n--- Display SalesManager ---" << endl;
    e2->display();    

    delete e1;
    delete e2;

    return 0;
}
