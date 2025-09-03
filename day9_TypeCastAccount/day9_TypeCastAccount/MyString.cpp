#include<iostream>
#include"MyString.h"
using namespace std;

//def const
MyString::MyString() {
	size = 0;
	name = new char[1];
	*name = '\0';
}

//para const
MyString::MyString(const char str[]) {

	size = strlen(str);
	name = new char[strlen(str) + 1];
	strcpy_s(name, strlen(str) + 1, str);

}

MyString::MyString(const MyString& obj) {

	size = strlen(obj.name);
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);

}

MyString::~MyString() {
	if (name) {
		delete[]name;
	}
	name = NULL;
}


void MyString::display() {
	cout << "Name : " << name << endl;
}