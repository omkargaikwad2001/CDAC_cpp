#include<iostream>
#include"Time.h"
using namespace std;
Time::Time() {
	cout << "This is default constructor" << endl;
}

Time::Time(int hh, int mm, int ss) {
	this->hours = hh;
	this->minutes=mm;
	this->seconds = ss;
}

void Time::showTime() {

	cout << hours << " : " << minutes << " : " << seconds << endl;

}

void Time::checkTime() {
	if (hours >= 6 && hours < 18)
		cout << "Day Time" << endl;
	else
		cout << "Night Time" << endl;
}