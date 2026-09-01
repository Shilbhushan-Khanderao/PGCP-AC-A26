//============================================================================
// Name        : 5.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Complex{
	int real;
	int imag;

public:
	Complex():real(0),imag(0){
	}
	Complex(int real, int imag):real(real),imag(imag){
	}

	void display(){
		cout << real << " + " << imag << "i" << endl;
	}

	Complex operator+(const Complex c){
		return Complex(this->real + c.real, this->imag + c.imag);
	}

	Complex operator*(const Complex c){
		return Complex(this->real + c.real, this->imag + c.imag);
	}

	// pre
	Complex& operator++(){
		++real;
		++imag;
		return *this;
	}

	//post
	Complex operator++(int){
		Complex temp = *this;
		++real;
		++imag;
		return temp;
	}

	auto operator<=>(const Complex& c)= default;

};

int main() {

	int a = 10;
	int b = 20;

	int c = a + b;

	cout << ++c << endl;		// 31
	cout << c++ << endl;		// 31
	cout << c << endl;		// 32



	cout << c << endl;

	Complex c1(10,20);
	Complex c2(20,40);

	c1.display();
	c2.display();

	Complex c3 = c1 + c2;
//	c3 = c1.operator+(c2);	// c1.function(arg);

	c3.display();

	++c3;	// pre increment

	c3.display();

	c++;

	c3.display();

	c1 > c2 ? cout << "true"<< endl : cout << "false"<< endl ;

	return 0;
}
