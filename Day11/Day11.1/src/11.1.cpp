//============================================================================
// Name        : 1.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Base{
	int x;
public:

	Base():x(0){
		cout << "base default" << endl;
	}

	Base(int x) : x(x){
		cout << "base cons" << endl;
	}
};

class Derived : public Base{
	int y;
public:
	Derived(int x, int y): Base(x), y(y){
		cout << "derived cons" << endl;
	}
};

int main() {
	Derived d(10,20);	// d = x  y

	return 0;
}
