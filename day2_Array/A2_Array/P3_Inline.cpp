//3) Write a program to calculate square, cube of number, max() to find maximum Use inline functions
#include<iostream>
using namespace std;

inline int findMax(int, int);
inline int square(int);
inline int cube(int);

int main() {

	int num;
	cout << "Enter number : ";
	cin >> num;

	int sq = square(num);
	int cu = cube(num);

	cout<<"Max = "<<findMax(sq, cu);


	return 0;
}

inline int findMax(int n1, int n2) {
	return n1 > n2 ? n1 : n2;
}

inline int square(int n) {
	return n * n;
}

inline int cube(int n) {
	return n * n * n;
}