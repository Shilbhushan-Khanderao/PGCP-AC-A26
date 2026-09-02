//============================================================================
// Name        : 2.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Complex{
	int real;	//double
	int imag;	//double

public:
	Complex():real(0),imag(0){
	}
	Complex(int real, int imag):real(real),imag(imag){
	}

	void display(){
		cout << real << " + " << imag << "i" << endl;
	}

	int& operator[](int index) {
		if(index == 0)
			return real;
		else if(index == 1)
			return imag;
		else
			throw out_of_range("Array out of bounds...");
	}
};


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

	int& operator[](int index){
		if(index >= size)
			throw out_of_range("Array out of range...");
		return data[index];
	}

};


int main(){

	Array a(2);	//object

	a[0] = 10;	//(a.operator[](0)).operator=(10)

	cout << a[2] << endl;

	return 0;
}



int main1() {
//	[] it works with arrays

	Complex c1(10,20);

	cout << c1[0] << endl;// c1.operator(0);
	cout << c1[1] << endl;// c1.operator(1);
	cout << c1[2] << endl;// c1.operator(2);


	return 0;
}
