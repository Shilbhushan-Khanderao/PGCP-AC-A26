//============================================================================
// Name        : 6.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Student{
	int rollno;
	string name;
	int age;
public:

	Student(){

	}

	Student(int rollno, string name, int age){
		this->rollno = rollno;
		this->name = name;
		this->age = age;
	}

	int getAge()const{
		return age;
	}

//	int getAge(Student const *this) const {
//		age = 10;	// not allowed
//		return age;
//	}


//	void setAge(Student*const this, int age) {
//		this->age = age;
//	}

	const string& getName() const {
		return name;
	}
	int getRollno() const {
		return rollno;
	}

	 Student& setName(const string &name) {
		this->name = name;
		return *this;
	}

	Student& setAge(int age) {
//		cout << *this << endl;
		this->age = age;
		return *this;
	}

	void setRollno(int rollno) {
		this->rollno = rollno;
	}
};


int main() {
	Student s;
	Student s1;

//	cout << s1.getRollno();
//	s1 = address = *this

//	s1.getName();
//	Student* getName(&s1);

//	Student *const this;		// & cannot change

	s1.setName("shil").setAge(30);

	cout << s1.getName() << " " << s1.getAge() << endl;

	return 0;
}
