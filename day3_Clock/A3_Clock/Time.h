#include<iostream>
using namespace std;
class Time {

public:

	Time();

	Time(int, int, int);

	void showTime();

	void checkTime();


private:
	
	int hours;
	int minutes;
	int seconds;
};

