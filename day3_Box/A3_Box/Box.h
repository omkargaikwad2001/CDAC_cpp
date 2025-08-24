#include<iostream>
using namespace std;
class Box{

public:

	Box(); // default constructor

	Box(int, int, int); // parameterized constructor

	void calculateVolume() const;

private:

	int length;
	int width;
	int height;


};