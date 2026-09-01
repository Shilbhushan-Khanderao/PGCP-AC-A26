//============================================================================
// Name        : 2.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int a = 10;	// initiliazation

//	lvalue rvalue

//	lvalue: identifier that identifies the object

//	a : lvalue : named entity which represents the object

//	rvalue: temporary result/ which does not have identifier but represents a object : int

//	10 : rvalue

	int b = a;	// b:lvalue  a: lvalue

	int &c = a;	// c:lvalue	a:lvalue

//	int &d = 10; //error: cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'

	int&& d = 10;	// no error

//	& : reference/ alias to another object : lvalue
//	&& : reference of object to taken : rvalue/lvalue

//	auto data = 10;
//	auto data = 10.5;
//	auto data = 10.5f;
//	auto data = 'c';
//	auto data = "shil";
//	auto data = func(); function return a object

	return 0;
}
