//============================================================================
// Name        : 3.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {


//	intialization
//	while(condition){
		//business logic code
		// increment/decrement
//	}

	// FOR LOOP
	// initialize; condition ; increment/decrement
	for(int i = 0; i<100 ; i++){
		cout << "FOR" << endl;
	}

	// DO-WHILE LOOP
	int i = 0;
	do{
		cout << "DO-WHILE"  << i << endl;
		i++;
	}while(i<100);


	// WHILE LOOP
//	int i = 0;
//	while(i<100){
//		cout << "WHILE" << i << endl;
//		i++;
//	}

	return 0;
}
