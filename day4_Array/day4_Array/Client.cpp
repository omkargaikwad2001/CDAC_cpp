#include<iostream>
#include"Array.h"
using namespace std;

int main()
{
	Array a1;
	//a1.accept();
	a1.display();

	Array a2(5);
	a2.accept();
	a2.display();

	Array a3(a2);
	a3.display();

	return 0;
}