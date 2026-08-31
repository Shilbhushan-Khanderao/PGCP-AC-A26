//============================================================================
// Name        : 2.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>
using namespace std;

class Student{
	int rollno;
	string name;

public:
	Student() : rollno(0), name(""){
		cout << "Default Constructor..." << endl;
	}

	Student(int rollno, string name) : rollno(rollno), name(name){
		cout << "Parameter Constructor..." << endl;
	}

	~Student(){
		cout << "Destructor..." << endl;
	}
};

int main(){

	shared_ptr<Student> studPtr = make_shared<Student>();
	shared_ptr<Student> studPtr1 = studPtr;

	studPtr.reset();
	studPtr1.reset();

	cout << "Total owners: " <<studPtr.use_count() << endl;	// 0
	cout << "Total owners: " <<studPtr1.use_count() << endl; // 1

	return 0;
}

int main1() {

//	int x = 10;
//
//	int* ptr = &x;
//
//	int *ptr1 = ptr;
//
//	delete ptr;
//	delete ptr1;

//	shared_ptr<int> sptr(new int(10));
	shared_ptr<int> sptr = make_shared<int>(10);

	cout << "Total owners: " <<sptr.use_count() << endl;

	shared_ptr<int> sptr1 = sptr;
	cout << "Total owners: " << sptr.use_count() << endl;

	sptr1.reset();

	cout << "Total owners: " << sptr.use_count() << endl;

	cout << sptr << endl;
	cout << sptr1 << endl;

	sptr.reset();

	cout << sptr << endl;
	cout << sptr1 << endl;

	cout << "Total owners: " << sptr.use_count() << endl;

	return 0;
}
