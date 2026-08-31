//============================================================================
// Name        : 5.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>
using namespace std;

//void show(unique_ptr<int> p){
//	cout << p << endl;
//}

class Student{
	int rollno;

};

void show(int& p){
	cout << p << endl;
}

void show(const Student& s){
//	cout << *s << endl;
}

int main() {

	unique_ptr<int> p = make_unique<int>(10);	//nullptr

	unique_ptr<Student> s = make_unique<Student>();
	shared_ptr<Student> s = make_shared<Student>();

//	show(move(p));

	show(*p);

	show(*s);

	return 0;
}
