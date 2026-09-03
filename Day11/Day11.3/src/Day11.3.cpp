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
public:
	int a;
};

class B : virtual public A{
public:
	int b;

};

class C : virtual public A{
public:
	int c;

};

// mutliple inheritance
class D : public C, public B{
public :
	int d;
};

int main() {

	D dobj;

//	dobj.a;	// without virtual error: request for member 'a' is ambiguous

	dobj.a = 10;
	cout << dobj.a << endl;

	return 0;
}
