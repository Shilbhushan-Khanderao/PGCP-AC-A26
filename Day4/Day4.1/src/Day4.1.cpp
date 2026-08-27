//============================================================================
// Name        : 1.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(){

	int a = 10;		// variable

	int *p = &a;		// ptr to a

	int **pp = &p;

	**pp = 20;

	cout << a << endl;
	cout << p << endl;
	cout << pp << endl;

	cout << a << endl;
	cout << *p << endl;
	cout << **pp << endl;



	return 0;
}



int main1() {

	int a = 10;

	int &r = a;		// ref : & variable name ke sath

	int *p = &a;		// ptr : & variable but of some other variable

	int b = 40;

//	p = &b;

	cout << &r << endl;
	cout << &a << endl;

	r = 20;

	cout << r << endl;
	cout << a << endl;

	cout << &p << endl;

	*p = 30;

	cout << *p << endl;
	cout << a << endl;
	cout << r << endl;

	int arr[]{10,20,30};

	int *ptrArr = arr;		// pointer to arr
	int &ref = arr[0];
//	int *ptrArr = &arr;		// error : 'int (*)[3]' to 'int*'

//	cout << ptrArr << endl;
//	cout << arr << endl;
//
//	cout << arr[0] << endl;
//	cout << *ptrArr << endl;
//
//	cout << arr[1] << endl;
//	cout << *(ptrArr+1) << endl;
//
//	cout << *(arr+1) << endl;

//	*ptrArr+1 : element + 1
//	int* arr1 = new int[3];	// dynamic memory allocation -> heap


	return 0;
}
