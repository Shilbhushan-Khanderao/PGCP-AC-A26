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

	int a = 10;	//20

	int b = 20;

//	int const *ptr = &a;
	const int *ptr1 = &a;		//pointer to const variable
	// address can be changed: can point to another variable address
	// can't change the value with derefercing

//	*ptr = b;	// not allowed

	int *const ptr2 = &a;		// const pointer to variable
	// address cannot be changed: cannot point to another variable address
	// can change the value with derefercing

	const int* const ptr3 = &a;	// const pointer to const variable
	// address cannot be changed: cannot point to another variable address
	// cannot change the value with derefercing

//	const int const *ptr = &a;	//error: duplicate 'const'

//	*ptr3 = b;	// not allowed
//	ptr3 = &b;	// not allowed

//	cout << &a << endl;
//	cout << ptr << endl;

//	ptr = &b; // not allowed

//	cout << &b << endl;
//	cout << ptr << endl;

//	int a = 10;

//	a = 20;
//	cout << a << endl;

	return 0;
}
