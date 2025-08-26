#include<iostream>
#include"Header.h"
using namespace std;

Box::Box() {
	cout << "Def";
}

Box::Box(int len, int bre) {
	this->len = len;
	this->bre = bre;
}

void Box::calc() {

	cout << len << " " << bre << endl;

}