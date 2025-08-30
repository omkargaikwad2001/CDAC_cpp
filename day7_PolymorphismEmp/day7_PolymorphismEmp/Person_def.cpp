#include<iostream>
#include"Person.h"
using namespace std;

Person::Person() {
	age = 0;
}

Person::Person(int age,const char* name,int day,int month,int year):name(name),dob(day,month,year){
	this->age = age;
}

void Person::display(){
	cout << "Age : " << age << endl;
	name.display();
	dob.display();
}