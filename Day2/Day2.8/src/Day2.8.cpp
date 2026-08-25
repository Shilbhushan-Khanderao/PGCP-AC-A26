//============================================================================
// Name        : 8.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void sayHello();	//function declaration

int add(int, int);	// function declaration + function prototype


// user defined function
void hello(){
	cout << "Hello" << endl;
}

//return_type name(paramters){
//	// function body: business logic
//}


//1. with returntype & with parameters
	int functionname(int a){
		return a;
	}

//2. without returntype & with parameters
//	void functionname(int a){
//
//	}
//3. with returntype & without parameters
	int functioname(){
		return 0;
	}
//4. without returntype & without parameters
	void hello1(){

	}


// return_type int
// parameters int, int
int add(int a, int b){ //calculateArea
	int c = a + b;
	return 0;	// return addition
}

int subtract(int a, int b){
	return a - b;
}


int main(int a, int b){

}

// predefined function
// main function
int main() {

				// 10 20 : arguments
	int result = add(10,20);	//function call

	cout << result;

	cout << add(10,30);

	sayHello();

	return 0;
}


void sayHello(){
	cout << "Hello world"<< endl;
}
