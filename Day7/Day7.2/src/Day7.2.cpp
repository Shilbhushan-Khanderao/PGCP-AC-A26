//============================================================================
// Name        : 2.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Student{

};

int main(){
	int a = 10;

	using shil = int;
//	typedef int shil;

	using ull = unsigned long long;

	ull val;

	shil b = 20;

}

int main1() {

//	typedef struct Student Student;

//	struct Student s1;

	int a = 10;

	typedef int shil;	//typedef currentName alias/anotherName

	shil b = 20;

//	unsigned long long val;
//	typedef unsigned long long ull;
//
//	s val1;

	typedef int* Intptr;

//	int* p, q;	int* p, int = q

	int *p;
	int *q;

	p = &b;
	q = &a;

	cout << p << endl;
	cout << q << endl;

//	Intptr p = &b;


	Intptr x, y;		// int* = x, int = y

	x = &b;
	y = &a;

	cout << a << endl;
	cout << b << endl;

	cout << x << endl;
	cout << y << endl;

//	vector<Student> vec = list of student;
//	typedef vector<Student> studList;
//	StudList




	return 0;
}
