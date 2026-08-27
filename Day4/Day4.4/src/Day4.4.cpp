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
	//data members
	int rollNo;
	string name;
	int age;

	public:
	//getter: to get the data of single variable
	int getRollNo() const {
//		rollNo = 10;		// error
		return rollNo;
	}

	string getName() const {
		return name;
	}

	//setter: to set/modify/manipulate a single variable
	void setRollNo(const int r){
		if(r > 0 && r < 300)
			rollNo = r;
	}

	void setAge(const int a) {
		age = a;
	}

	void setName(const string &n) {
		name = n;
	}

	// member functions
	void acceptDetails(){
		cout << "Enter Student Details: " << endl;
		cin >> rollNo >> name >> age;
	}


};

void displayStudentDetails(Student s){
	cout << "Roll No: " <<s.getRollNo() << endl;
	cout << "Name: " << s.getName()<< endl;
}

int main() {

	Student s;

	s.acceptDetails();



//	cout << s.getRollNo() << endl;
//	cout << s.getName() << endl;


	s.setRollNo(10);
	displayStudentDetails(s);

	return 0;
}
