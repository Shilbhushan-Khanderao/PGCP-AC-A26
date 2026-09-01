//============================================================================
// Name        : 1.cpp
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
		cout << "Copy Assingment Operator..." << endl;
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

	~Array(){
		cout << "Destructor..." << endl;
		delete[] data;
	}

};

int main() {

	Array a(2);

	Array a1(2);		// already existed

	Array a2 = a;	// copy constructor

	a1 = a;		// copy assignment operator=

//	a1 = a1;

//	a1.operator=(a);


	return 0;
}
