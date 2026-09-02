//============================================================================
// Name        : 5.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// one parent class
class Base{
	int a;
	int b;

public:
	int getA() const {
		return a;
	}

	void setA(int a) {
		this->a = a;
	}

	int getB() const {
		return b;
	}

	void setB(int b) {
		this->b = b;
	}
};

// one child which is inheriting the parent class
				// public, private, protected : mode of inheritance
class Derived : public Base{

};


// single
//class A{
//
//};
//
//class B : public A{
//
//};


// multilevel
//class A{
//
//};
//
//class B : public A{
//
//};
//
//class C : public B{
//
//};

// Heirarichal
//class A{
//
//};
//
//class B : public A{
//
//};
//
//class C : public A{
//
//};

// hybrid
class A{

};

class B : public A{

};

class C : public A{

};

// multiple
class D : public B, public C{

};

int main() {

	Derived d;

	cout << d.getA() << endl;
	cout << d.getB() << endl;

	return 0;
}
