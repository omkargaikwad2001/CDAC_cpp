#include <iostream>
#include "Box.h"
using namespace std;

int main()
{ 
	int l, w, h;
	cout << "Enter length of box : ";
	cin >> l;
	cout << "Enter width of box : ";
	cin >> w;
	cout << "Enter height of box : ";
	cin >> h;
	Box b(l,w,h);
	b.calculateVolume();
	return 0;
}