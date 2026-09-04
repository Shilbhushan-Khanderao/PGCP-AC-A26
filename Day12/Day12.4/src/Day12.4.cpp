//============================================================================
// Name        : 4.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Base{
public:
	virtual void show(){
		cout << "show from base" << endl;
	}
	virtual ~Base() = default;
};

class Derived : public Base{
public:
	void show() override{
		cout << "show from derived" << endl;
	}

	void display(){
		cout << "display from derived" << endl;
	}
};
class AnotherDerived : public Base{
public:
	void show() override{
		cout << "show from another_derived" << endl;
	}

	void display(){
		cout << "display from another_derived" << endl;
	}
};

int main() {
	double a = 10;
	double d = 20;

//	cout << typeid(a).name() << endl;
//	cout << typeid(d).name() << endl;

	Base b;
	Derived d1;
	AnotherDerived ad;

	Base *b1 = &ad;	//upcasting		//b1 = address of d1 derived -> stack *b1

	Derived *dptr = dynamic_cast<Derived*>(b1);

	Derived *sptr = static_cast<Derived*>(b1);
//	static type		// dynamic type

	sptr->display();		//static

	if(dptr != nullptr)
		dptr->display();
	else
		cout << "Invalid casting" << endl;
//	cout << typeid(*b1).name() << endl;

//	if(typeid(*b1) == typeid(Derived)){
//		b1->show();
//		cout << "same type" << endl;
//	}
//	else
//		cout << "not same type" << endl;



//	cout << typeid(b).name() << endl;
//	cout << typeid(d1).name() << endl;

//	if(typeid(a) == typeid(d))
//		cout << "Same Type" << endl;
//	else
//		cout << "Not Same Type" << endl;



	const int val = 10;
//	val = 30;
	cout << "val: " << val << endl;

	int* valPtr = const_cast<int*>(&val);

	*valPtr = 20;

	cout << "val : " << val << endl;


	int reval = 20;

	int *address = reinterpret_cast<int*>(&reval);

	cout << "reval : " << address << endl;

	return 0;
}
