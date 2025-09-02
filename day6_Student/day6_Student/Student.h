#include "Date.h"

class Student {
public:
    Student();                                       
    Student(const char* nm, int d, int m, int y);    
    void accept();                                   
    void display();                                  

private:
    int roll_num;            
    char name[30];           
    Date dateOfBirth;        
    static int counter;      
};
