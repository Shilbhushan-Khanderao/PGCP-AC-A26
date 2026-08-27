//============================================================================
// Name        : 5.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Student{
	//data members

	int rollNo;
	char division;
	char grade;

	public:
	// member functions
	void acceptDetails(){
		cout << "Enter Student Details: " << endl;
		cin >> rollNo;

	}

	void displayDetails(){
		cout << "Roll No: " << rollNo << endl;
//		cout << "Age: " << age << endl;
	}

};


int main() {

	Student s;	// memory : 8 bytes	9 bytes


	Student stackObj;	// variable/object/identifier	-> Stack
	Student *heapObj = new Student();	// -> heap : address of heap memory location where object will be stored

//	int int			: 8 bytes
//	int int char		: 12 bytes 4 + 4 + 1 -> 9 + 3: padding -> 12
//	char int char	: 12 bytes 1 + 4 + 1 -> 4 + 4 + 4 -> 12
//	int char char	: 8 bytes  4 + 1 + 1 -> 4 + 2 + 2 -> 8

	cout << sizeof(s) << endl;


	heapObj->acceptDetails();
	heapObj->displayDetails();


	return 0;
}
