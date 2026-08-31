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
public:
	int rollno;
	string name;

	Student() : rollno(0), name(""){
		cout << "Default Constructor..." << endl;
	}

	Student(int rollno, string name) : rollno(rollno), name(name){
		cout << "Parameter Constructor..." << endl;
	}

	Student(const Student& s) : rollno(s.rollno), name(s.name){
		cout << "Copy Constructor..." << endl;
	}

	~Student(){
		cout << "Destructor..." << endl;
	}
};

void show(const Student s){
	cout << s.name << endl;
	cout << s.rollno << endl;
}

class Array{
public:
	int* data;
	int size;

	Array() : data(nullptr), size(0){
		cout << "Default Constructor..." << endl;
	}
	// shallow copy: default nature for compiler
//	Array(const Array& a){
//		cout << "Copy Constructor..." << endl;
//		data = a.data;	// data = value
//		size = a.size;
//	}

	// Deep copy
	Array(const Array& a){
		cout << "Copy Constructor..." << endl;
//		data = a.data;	// data = value
		size = a.size;
		data = new int[size];

		for(int i=0;i<size;i++){
			data[i] = a.data[i];
		}
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

int main(){

	Array a(3);

	Array a1 = a;	// copy

	Array a2(2);

	a2 = a;		// copy constructor will not be called : copy assignment operator

	cout << a1.data << endl;
	cout << a.data << endl;

	return 0;
}


int main1() {

	int a = 10;	// normal variable

	int b = a;	// b : 10  a : 10 // copy

	Student s1(101,"shil");

	Student s2 = s1;		// copy : copy constructor	// if not written will be provided by complier
//	Student s2(s1);

	show(s2);


	return 0;
}
