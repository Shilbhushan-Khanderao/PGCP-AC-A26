//============================================================================
// Name        : 6.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Base class
class Base{
public:
	Base(){
		cout << "base constructor.." << endl;
	}

	~Base(){
		cout << "base destructor.." << endl;
	}

};

//Derived class
class Derived : public Base{
public:
	Derived(){
		cout << "derived constructor.." << endl;
	}

	~Derived(){
		cout << "derived destructor.." << endl;
	}
};

int main() {

//	Base b;


	Derived d;

	return 0;
}
