//============================================================================
// Name        : 5.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void swapping(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main(){

	int a = 20;

	char b = 'A';

	char *ptr = &b;

	cout << a <<endl;
	cout << &a <<endl;
	cout << sizeof(b) <<endl;
	cout << sizeof(ptr) <<endl;

//	int *ptr = NULL;	//MACRO : 0 int value
//	int *ptr = nullptr;	// modern c++ way


//	cout << *ptr <<endl;
//	cout << ptr <<endl;

	return 0;
}

int main2(){

	int a = 10;
	int b = 20;

	swapping(&a, &b);

	cout << a << " : " << b << endl;

	return 0;
}

int main1() {

	int a = 10;

	int *ptrA = &a;	// initialization of ptrA variable with address of a

	int *ptr;	// syntax of declaring a pointer variable : declaration of pointer

	ptr = &a;	// assinging the address of a variable

//	referencing

	cout << a << endl;		//value
	cout << ptr << endl;		//value: it is address of a

	cout << &a << endl;		// address of a
	cout << &ptr << endl;	// address of ptr

	cout << *ptr << endl;	// value of a via ptr

//	*ptr : Deferencing


	return 0;
}
