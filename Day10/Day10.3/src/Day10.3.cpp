//============================================================================
// Name        : 3.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class A{
	int a;
	int b;
public:
	friend class B;
};

class B{
public:
	void display(A a){
		cout << a.a << a.b << endl;
	}
};

class Complex{
	int real;	//double
	int imag;	//double

public:
	Complex():real(0),imag(0){
	}
	Complex(int real, int imag):real(real),imag(imag){
	}

	void display(){
		cout << real << " + " << imag << "i" << endl;
	}

	//insertion operator overloading : non member operator
	friend ostream& operator<<(ostream& out, const Complex c){
		return out << c.real << " + " << c.imag <<"i";
	}

	//extraction operator overloading : non member operator
	friend istream& operator>>(istream& in, Complex& c){
		return in >> c.real >> c.imag;
	}
};

int main() {

	Complex c1(10,20);
	Complex c2(20,30);

//	c1.display();

	int a = 10;

	cout << a << endl;
	cout << c1 << endl;	//cout.operator<<(c1)

	Complex c3;

	cout << "Enter complex number:" << endl;
	cin >> c3;
	cout << c3 << endl;	//cout.operator<<(c1)

	B b;
	A a1;
	b.display(a1);




	return 0;
}
