//============================================================================
// Name        : 1.cpp
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
	string name;
	int age;

	public:
	// member functions
	void acceptDetails(){
		cout << "Enter Student Details: " << endl;
		cin >> rollNo >> name >> age;

	}

	void displayDetails(){
		cout << "==========Student Detail==========" << endl;
		cout << "Roll No: " << rollNo << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};


int main() {

	Student s;	// object created on stack	: s ={rollNo, name, age} | address

//	s.acceptDetails();
//	s.displayDetails();

	Student studArr[3];		// we need to allocate a memory for 3 student object

//	for(int i=0;i<3;i++){
//		studArr[i].acceptDetails();
//	}
//
//	for(int i=0;i<3;i++){
//		studArr[i].displayDetails();
//	}


	Student *s1 = new Student();	// object created on heap : s ={rollNo, name, age} | address

//	s1->acceptDetails();
//	s1->displayDetails();

	Student *studArr1 = new Student[3];

	for(int i=0;i<3;i++){
		studArr1[i].acceptDetails();
	}

	for(int i=0;i<3;i++){
		studArr1[i].displayDetails();
	}

	return 0;
}
