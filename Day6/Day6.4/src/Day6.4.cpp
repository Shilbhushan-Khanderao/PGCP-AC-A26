/*
 * Day6.4.cpp
 *
 *  Created on: 29-Aug-2026
 *      Author: Shilbhushan
 */
#include <iostream>
using namespace std;

int x = 100;		// global variable

//1. global scope
//2. local scope
//3. function scope
//4. class scope		non static member: . -> | static: ::
//5. namespace scope ::


int main(){

	int x = 10;		// local variable

	{
		int y = 20;

		cout << y << endl;
	}

	cout << x << endl;
//	cout << y << endl;
	cout << ::x << endl;

	return 0;
}


