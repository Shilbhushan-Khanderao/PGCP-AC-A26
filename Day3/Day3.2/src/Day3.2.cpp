//============================================================================
// Name        : 2.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


//void swapping(int abc, int jkl){	// pass by value
//	int temp = abc;		//temp = 10
//	abc = jkl;			// abc = 20
//	jkl = temp;			// jkl = 10
//}

void swapping(int &a, int &b){		// pass by reference
	a = a + b;	// 10 + 20 : a = 30
	b = a - b;	// 30 - 20 : b = 10
	a = a - b;	// 30 - 10 : a = 20
}


int main(){

	int a = 10;

//	int &ref1;	// declaration is not allowed

	int b = 50;

	int &bref = b;

	int &ref = a;	// reference variable

	cout << a << endl;
	cout << ref << endl;

	ref = 20;

	ref = b;

	cout << a << endl;
	cout << ref << endl;

}

int main1() {

	int a = 10;
	int b = 20;

	swapping(a,b);		//call by value

	cout << "A : " << a << endl;
	cout << "B : " << b << endl;

	return 0;
}
