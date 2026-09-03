//============================================================================
// Name        : 4.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal{	//abstract class
public:
	int legs;

	Animal():legs(0){
		cout << "Animal default" << endl;
	}

	Animal(int legs) : legs(legs){
		cout << "Animal para cons" << endl;
	}

	virtual void voice() = 0;	// pure virtual function

	void eat(){
		cout << "eat food..." << endl;
	}

	void sleep(){
		cout << "sleep..." << endl;
	}

	void display(){
		cout << legs << endl;
	}

	virtual ~Animal(){
		cout << "animal destructor..." << endl;
	}
};

class Dog : public Animal{
public:
	string breed;

	Dog(int legs, string breed): Animal(legs), breed(breed){
		cout << "Dog para cons" << endl;
	}

	// function hiding
	void voice() override{
		cout << "bark..." << endl;
	}

	void bite(){
		cout << "dog bite someone..." << endl;
	}

	void display(){
		cout << legs  << " : " << breed << endl;
	}
	~Dog(){
		cout << "dog destructor..." << endl;
	}
};

//interface
class IPayment{
public:
	virtual void processPayment() = 0;
	virtual ~IPayment() = default;
};

class UPI : public IPayment{
public:
	void processPayment(){
		cout << "UPI Payement" << endl;
	}
};

int main() {

//	Animal a;	//error: cannot declare variable 'a' to be of abstract type 'Animal'

	Dog d(4,"german");

	Animal* a = &d;

	a->voice();

	return 0;
}
