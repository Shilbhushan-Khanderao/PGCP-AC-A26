//============================================================================
// Name        : 3.cpp
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
	const string course;

	public:

//	// default constructor
	Student() : rollNo(0), name(""), age(0), course(""){
	}

	// parameterised constructor
	Student(int r, string n, int a, string c) : rollNo(r), name(n), age(a), course(c){
		cout << "para cons..." <<endl;
	}

	Student(int r, int a){
		cout << "para cons with 2 val" << endl;
		rollNo = r;
		age = a;
	}

	// member functions
	void acceptDetails(){
		cout << "Enter Student Details: " << endl;
		cin >> rollNo >> name >> age;
	}

	void displayDetails(){
		cout << "========= Student Details =========" << endl;
		cout << "Roll No: " << rollNo << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Course: " << course << endl;
	}

	~Student(){
		cout << "destructor.."  << rollNo << endl;
	}
};

int main() {

//	Student s;

	Student s1(101,"shil",13, "AC");
	Student s2(102,"shil1",33, "BDA");
	Student s3(103,"shil2",24, "AI");

//	Student *s1 = new Student();

//	s.displayDetails();

	s1.displayDetails();
	s2.displayDetails();
	s3.displayDetails();

	return 0;
}
