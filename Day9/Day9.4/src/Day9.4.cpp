//============================================================================
// Name        : 4.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Student{
	// data member
	int rollno;
	string name;
	static int total;	//declare static data member

	const string course;


public:
	mutable int accessNameCount = 0;		// mutable data member

	Student() : rollno(0), name(""){
		total++;
	}

	Student(int rollno, string name, string course): rollno(rollno), name(name), course(course){
		this->rollno = rollno;
		this->name = name;
//		this->course = course;	// error: for assignment
	}

//	int getTotal(){
//		return total;
//	}

	string getName() const {
		accessNameCount++;
		return name;
	}

	static int getTotal(){
		return total;
	}

//	static void print(){
//		cout << rollno << " : "  << name << endl;
//		//error: invalid use of member 'Student::rollno' in static member function
//	}

};

int Student::total = 0;

int main() {

	Student s;	// s.rollno s.name

	Student s1;	// s1.rollno s1.name

	cout << "Total Students: " <<  s.getTotal()<< endl;

//	cout << s.total << endl; // no issue, not recommended
//	cout << Student::total << endl; // recommended

	s.getTotal();	 	 // not recommended
	Student::getTotal(); // recommended

	const Student s2;	// constant object

	s2.getName();

	cout << s2.accessNameCount << endl;

	return 0;
}
