#include"MyString.h"
#include"Date.h"
class Person {

public:

	Person();

	Person(int, const char*, int, int, int);

	void display();


private:
	int age;
	MyString name;
	Date dob;


};