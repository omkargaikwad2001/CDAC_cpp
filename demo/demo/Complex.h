class Complex {

public:

	Complex();

	Complex(int, int);

	Complex(const Complex&);

	~Complex();

	Complex operator+(const Complex&);

	Complex operator-(const Complex&);

	Complex operator*(const Complex&);

	Complex operator++();

	Complex operator++(int);

	void display();

private:
	int real;
	int imagi;

};