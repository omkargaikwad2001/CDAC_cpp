#include<iostream>
using namespace std;
class Date {

public:
	
	//default const
	Date();

	//parameterised const
	Date(int, int, int);

	//copy const
	Date(Date &);

	void accept();
	void display();
	void showDate();


private:

	int day=0;
	int month=0;
	int year=0;

};