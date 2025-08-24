#include <iostream>
#include "Box.h"
using namespace std;

Box::Box()
{
	cout << "Default Constructor called"<<endl;
}

Box::Box(int length,int width,int height)
{
	this->length = length;
	this->width = width;
	this->height = height;
}

void Box::calculateVolume() const
{
	cout << "Volume of Box is :-" << (length * width * height)<<endl;
}