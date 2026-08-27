//============================================================================
// Name        : 3.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;



//struct Student{
//	//data members
//	int rollNo;
//	string name;
//	int age;
//
//	// member functions
//	void acceptDetails(){
//		cout << "Enter Student Details: " << endl;
//		cin >> rollNo >> name >> age;
//	}
//
//	void displayDetails(){
//		cout << "Roll No: " << rollNo << endl;
//		cout << "Name: " << name << endl;
//		cout << "Age: " << age << endl;
//	}
//
//};

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

	void displayDetails();
};

void Student::displayDetails(){
	cout << "Roll No: " << rollNo << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}


int main() {

	Student stud;

//	stud.name = "shil";

	stud.acceptDetails();	// no issue

	stud.displayDetails();

	return 0;
}
