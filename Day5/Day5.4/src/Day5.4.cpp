//============================================================================
// Name        : 4.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

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
		cout << "default cons..." <<endl;
	}

	// parameterised constructor
	Student(int r, string n, int a, string c) : rollNo(r), name(n), age(a), course(c){
		cout << "para cons..." <<endl;
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

	int rollNo, age;
	string name, course;

//	cout << "Enter Students Details: " << endl;
//	cin >> rollNo >> name >> age >> course;

	Student *s1 = new Student();		// heap : (dynamic memory) allocation
	Student *s2 = new Student(1012, "shil", 28, "AC");		// heap : (dynamic memory) allocation


	Student *studArr = new Student[3];	// dynamic memory array


	s1->displayDetails();
	s2->displayDetails();

	delete s1;
	delete s2;

//	delete studArr;		// warning: a
	delete[] studArr;
	return 0;
}
