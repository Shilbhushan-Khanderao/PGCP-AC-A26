//============================================================================
// Name        : 1.cpp
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

	auto operator<=>(const Complex& c) const = default;

	//member operator
	Complex operator-(const Complex c){
		return Complex(this->real - c.real, this->imag - c.imag);
	}

	//non member operator
	friend Complex operator-(const Complex lhs, const Complex rhs){
		return Complex(lhs.real - rhs.real, lhs.imag - rhs.imag);
	}
};

class Number{
	int val;		//private

public:
	Number(): val(0){

	}

	Number(int val): val(val){
	}

	void display(){
		cout << val << endl;
	}

	//member operator -> member function
	Number operator+(const Number o){
		return Number(val + o.val);
	}

	//non member operator -> non member function
	friend Number operator+(const int& one, const Number& two);
};

Number operator+(const int& one, const Number& two){
	return Number(one + two.val);
}

int main() {

	Complex c1(10,20);

	Complex c2(30,40);

	c1 < c2 ? cout << "True" << endl : cout << "False" << endl;
	c1 > c2 ? cout << "True" << endl : cout << "False" << endl;

	Complex c3 = c2 - c1;

	c3.display();

	Number n(10);
	Number n1(20);

	Number n2 = n + n1;

	n2.display();

	Number n3 = n + 10;	//n.oprator+(10)

	n3.display();

	Number n4 = 10 + n;	//rvalue it represents an int.operator+(number)

	n4.display();

	return 0;
}
