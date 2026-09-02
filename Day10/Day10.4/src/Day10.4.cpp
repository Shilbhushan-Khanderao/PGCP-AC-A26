//============================================================================
// Name        : 4.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//class Student;	// forward declaration

class Student{
	int empid;
	int age;
	string name;
public:

	string getName(){
		return name;
	}


	void study(){

	}

	void setName(const string &name) {
		this->name = name;
	}
};

class Teacher{
	int empid;
	int age;
	string name;
public:

	void teach(Student& s){
		cout << "teaching  : "<< s.getName() << endl;
	}

};


class Department{
	string name;
	Teacher* teacher;	// aggregation
//	Teacher& teacher;
public:
	Department(string name):name(name){
		teacher = new Teacher();
	}

};



class Engine{
	int hp;
	double avg;

public:
	Engine(){
		cout << "default engine..." << endl;
	}
};

class Car{
	int wheels;
	string color;
	Engine engine;	// composition
public:
	Car(){
		cout << "default car..." << endl;
	}

};

int main() {

	Student s;

	s.setName("Shil");

	Teacher t;

	t.teach(s);		// association

	Department d("it");	// it will create teacher object

	Car c;


	return 0;
}
