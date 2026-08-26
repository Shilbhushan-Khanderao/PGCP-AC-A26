//============================================================================
// Name        : 4.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void swapping(int &a, int &b){

	cout << "Before Swap : (Inside)"<<endl;
	cout << a << " " << b<< endl;
	cout << &a  << " : " << &b << endl;

	int temp = a;
	a = b;
	b = temp;

	cout << "After Swap : (Inside)"<<endl;
	cout << a  << " " << b<<endl;
	cout << &a  << " : " << &b <<endl;
}


int main(){

	int a = 10;
	int b = 20;

	swapping(a, b);

	cout << "After swapping function:" << endl;
	cout << a <<" " <<  b<< endl;
	cout << &a  << " : " << &b << endl;


	return 0;
}


int main1() {

	int a = 10;

	int &ref = a;

	cout << "Address of a : " << &a <<endl;
	cout << "Address of ref : " << &ref <<endl;

	cout << "value of a : " << a <<endl;
	cout << "value of ref : " << ref <<endl;




	return 0;
}
