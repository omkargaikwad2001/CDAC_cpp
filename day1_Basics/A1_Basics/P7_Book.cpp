//7. Define a structure “Book” having members – bookId, title, price.Use typedef to name this structure “BOOK”.
//Accept the data for a book and display the record.
#include<iostream>
#include<string>
using namespace std;

typedef struct Book{

	int bookId;
	string title;
	float price;

}BOOK;

void accept(BOOK &);
void display(BOOK &);

int main() {

	BOOK b1;

	accept(b1);
	display(b1);


	return 0;
}

void accept(BOOK &b1) {

	cout << "Enter book id : ";
	cin >> b1.bookId;

	cin.ignore();
	cout << "Enter title : ";
	getline(cin, b1.title);

	cout << "Enter price : ";
	cin >> b1.price;

}

void display(BOOK& b1) {

	cout << "Book id = " << b1.bookId << endl;
	cout << "Book title = " << b1.title << endl;
	cout << "Book price = " << b1.price << endl;

}