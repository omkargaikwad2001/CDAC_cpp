#include<iostream>
using namespace std;
class Array {

public:

	//default constructor
	Array();

	//para constructor
	Array(int);

	//copy constructor
	Array(const Array&);

	//destructor
	~Array();

	//display
	void display();
	void accept();

private:

	int size = 5;
	int* arr = NULL;

};
