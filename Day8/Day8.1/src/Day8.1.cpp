//============================================================================
// Name        : 1.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>	// include memory header for smart pointers
using namespace std;

class Array{
public:
	int* data;
	int size;

	Array() : data(nullptr), size(0){
		cout << "Default Constructor..." << endl;
	}

	Array(int size) : size(size){
		data = new int[size];
		cout << "Parameter Constructor..." << endl;
	}

	~Array(){
		cout << "Destructor..." << endl;
		delete[] data;
	}

};

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

	unique_ptr<Student> student = make_unique<Student>();	// uptr on stack, object on heap

//	Student* studPtr = new Student();	// pointer on stack, object on heap
//
//	delete studPtr;

	return 0;
}



//class Resource{
//	int *a;		// to heap
//
//public:
//	Resource(){
//		a = new int();
//	}
//
//	~Resource(){
//		delete a;
//	}
//};

int main1() {

//	int x = 10;

//	int* p = &x;		// int* name = assign
//
//	int* ptr = new int(10);	// heap

//	int y(10);

//	Student s(101, "shil");	// stack

//	unique_ptr<int> up(new int(20));		// unique_ptr<datatype> Objectname/ptrName();

	unique_ptr<int> up = make_unique<int>(20);	// recommended
						// is function: creates a unique pointer and returns it

	// uniquePtr is created and one resource is allocated with it the ptr will be the sole owner of it.
//	unique_ptr<int> up1 = up; // error: use of deleted function 'std::unique_ptr<_Tp, _Dp>

//	unique_ptr<int> up1 = move(up);	// move sematincs: tranfers the resource ownership
//	up = nullptr;

	cout << up << endl;
	cout << *up << endl;

	int* ptr = up.release();

	delete ptr;

	return 0;
}
