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

	int age = 10;
	// single statement
	if(age>=18)
		cout << age << endl;

	// multi-line if with {}
	if(age >= 18){
		cout << "You can Vote!" << endl;
		cout << age;

	}

//	 not recommended
	if(age){
		cout << "You can vote!!" << endl;
	}

	if(age >= 18){
		cout << "You can Vote!" << endl;
		cout << age;
	} else{
		cout << "You cannot Vote!" << endl;
	}

	int percentage = 55;

	// if-else ladder
	//	GRADE Checking
	if(percentage >= 70 && percentage <= 80){
		cout << "GRADE : A" << endl;
	} else if(percentage >= 60 ){
		cout << "GRADE : B" << endl;
	} else if(percentage >= 50){
		cout << "GRADE : C" << endl;
	} else{
		cout << "Fail!" << endl;
	}


	int choice = 1;

	switch(choice){
		case	 1:
			cout << "Choice 1" << endl;
			break;	// jump statement
		case 2:
			cout << "Choice 2" << endl;
			break;
		case 3:
			cout << "Choice 3" << endl;
			break;
		default:
			cout << "Default" << endl;
	}

	return 0;
}
