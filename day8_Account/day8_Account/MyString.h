#pragma once

class MyString {

public:

	MyString();

	MyString(const char[]);

	MyString(const MyString&);

	void display();

	~MyString();


private:

	int size;
	char* name;

};