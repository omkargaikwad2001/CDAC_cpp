#include<iostream>
#include"Array.h"
using namespace std;

//default constructor
Array::Array() {
	cout << "This is default constructor" << endl;
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
}

//para constructor
Array::Array(int size) {
	
	this->size = size;
	this->arr = new int[this->size];

	for (int i = 0; i < this->size; i++){
		this->arr[i] = 0;
	}
}

//copy constructor
Array::Array(const Array& a)
{
	cout << "User defined copy constructor called" << endl;
	this->size = a.size;
	this->arr = new int[this->size];
	for (int i = 0; i < this->size; i++)
		arr[i] = a.arr[i];
}

Array::~Array()
{
	cout << "destructor called"<<endl;
	if (arr)
	{
		delete[]arr;
	}
	arr = NULL;
}

void Array::display()
{
	if (arr)
	{
		cout << "Array elements:: " << endl;;
		for (int i = 0; i < size; i++){
			cout << arr[i]<<" ";
		}
	}
	cout << endl;
}

void Array::accept() {

	cout << "Enter array element" << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

}