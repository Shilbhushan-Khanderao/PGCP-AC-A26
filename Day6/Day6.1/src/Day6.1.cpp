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
	int rollno;
	string name;
	int age;

public:
	Student(){
		cout << "default cons.." << endl;
	}

	~Student(){
		cout << "destructor.." << endl;
	}
};


int main() {

	// c way
//	Student *s1 = (Student*)malloc(sizeof(Student));	//void* | calloc realloc
//
//	free(s1);

	// c++ way
//	Student s1;
	Student *s = new Student();
	delete s;

	return 0;
}
