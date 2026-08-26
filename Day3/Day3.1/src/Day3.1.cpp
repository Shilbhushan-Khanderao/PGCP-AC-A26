//============================================================================
// Name        : 1.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//returnType functionName(paramters...){
//
//}

// function without parameters and without returntype
void sayHello(){
	cout << "Hello" << endl;
}

// function without parameters and with returntype
int returnValue(){
	return 100;
}

void add(int,int);	// function declaration/prototype
int multiply(int a, int b);


int main() {

	sayHello();	// function call

	int val = returnValue();

	cout << val << endl;

	add(10,20);	// arguments

	int result = multiply(30, 40);

	cout << result << endl;

	return 0;
}

// function with parameters and without returntype
void add(int a, int b){
	cout << "Sum : " << a + b << endl;
}

// function with parameters and with returntype
int multiply(int a, int b){
	return a * b;
}
