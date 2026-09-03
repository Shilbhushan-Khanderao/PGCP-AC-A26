//============================================================================
// Name        : 2.cpp
// Author      : Shil
// Version     :
// Copbreedright   : breedour copbreedright notice
// Description : Hello World in C++, Ansi-stbreedle
//============================================================================

#include <iostream>
using namespace std;

// function overloading
int add(int a, int b){			//add(int,int)
	return a + b;
}

double add(double a, int b){		//add(double,int)
	return a + b;
}

double add(int b, double a){		//add(int,double)
	return a + b;
}

class Animal{
public:
	int legs;

	Animal():legs(0){
		cout << "Animal default" << endl;
	}

	Animal(int legs) : legs(legs){
		cout << "Animal para cons" << endl;
	}

	virtual void voice(){
		cout << "some voice..." << endl;
	}

	void eat(){
		cout << "eat food..." << endl;
	}

	void sleep(){
		cout << "sleep..." << endl;
	}

	void display(){
		cout << legs << endl;
	}

	 ~Animal(){
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

class Cat : public Animal{
	string breed;
public:
	Cat(int legs, string breed): Animal(legs), breed(breed){
		cout << "Cat para cons" << endl;
	}

	// function hiding
	void voice() override {
		cout << "meow..." << endl;
	}

	void bite(){
		cout << "cat bite someone..." << endl;
	}
	~Cat(){
		cout << "cat destructor..." << endl;
	}
};

void produceAnimalVoice(Animal& a){
	a.voice();
}
//
//void show(Animal& a){
//	cout << a.legs  << " : " << a.breed << endl;
//}

int main(){
//	Dog d(4, "german");
//	Cat c(4, "persian");

//	Animal* a = &d;

//	produceAnimalVoice(a);	//upcasting
//
//	d.voice();
//	a->voice();
//
//	a->eat();

//	Dog& d1 = (Dog&)a;	// Dog* d1 = (Dog*)a;
//	Dog* d1 = dynamic_cast<Dog*>(a);
//
//	if(d1 == nullptr)
//		cout << "Wrong casting..." << endl;
//	else
//		d1->bite();	//error: 'class Animal' has no member named 'bite'


	Animal* a1 = new Dog(4, "husky");	//pass by value

	delete a1;

	cout << sizeof(Animal) << endl;
	cout << sizeof(Dog) << endl;

//	a1.display();


	return 0;
}

class Base{
public:
	virtual void show(){
		cout << "base show" << endl;
	}

	virtual ~Base(){

	}
};

class Derived : public Base{
public:
	int x;

//	using Base::show;
//
//	void show(int x) override {
//		cout << "derived show" << endl;
//	}

	void show() override {
		cout << "derived show" << endl;
	}
};

int main1() {

	Dog d(4, "dogesh bhai");

	d.bite();	// behaviour of dog
	d.voice();	// behaviour of dog

	cout << "================" << endl;
	Animal a;

	a.voice();

	Derived d1;

//	d1.show(10);

	d1.show();

	cout << "================" << endl;

	Base *b1 = &d1;	// base reference/pointer -> to derived object

	Base *b2 = &d1;	// upcasting

	b1->show();		//

	return 0;
}
