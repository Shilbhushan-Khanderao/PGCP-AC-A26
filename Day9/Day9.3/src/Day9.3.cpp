//============================================================================
// Name        : 3.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
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

	// move constructor
	Array(Array&& a){
		cout << "Move Constructor..." << endl;
		size = a.size;
		data = a.data;
		a.data = nullptr;
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

	//shallow copy
//	Array& operator=(const Array& a){
//		size = a.size;
//		data = a.data;
//		return *this;
//	}

	Array& operator=(const Array& a){
		cout << "Copy Assignment Operator..." << endl;
		if(this != &a){
			delete[] data;

			size = a.size;
			data = new int[size];

			for(int i=0;i<size;i++){
				data[i] = a.data[i];
			}
		}
		return *this;
	}

	Array& operator=(Array&& a){
		cout << "Move Assignment Operator..." << endl;
		if(this != &a){
			size = a.size;
			data = new int[size];
			a.data = nullptr;
		}
		return *this;
	}

	~Array(){
		cout << "Destructor..." << endl;
		delete[] data;
	}

};

int main() {

	Array a(2);		// parameterized

	Array a1 = a;	// Initialization : copy constructor

	Array a2(2);		// parameterized

	a2 = a;			// copy assignment operator=

	Array a3 = move(a);	// tells compiler that the object is ready to be moved

	Array a4(2);		// declaration : parameter

	a4 = move(a1);			// copy assignment

	return 0;
}
