//============================================================================
// Name        : 6.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

void some(){
	try{
		throw 10.5;	//int
		cout << "Statement1" << endl;
	}catch(double& e){
		cerr <<"inner block exception occured: "<< endl;
	}
}

int main() {
	int data;
	string name;

	cout <<"Enter data : "<< endl;	// program -> data -> monitor
	cin >> data; // keyboard -> data -> program

	cin.ignore();

	cout <<"Enter Name: "<< endl;	// program -> data -> monitor
//	cin >> name;						// keyboard -> data -> program
	getline(cin,name);

	char c;
	cin.get(c);

	cout << data << endl;
	cout << name << endl;
//### setw
//### setprecision
//### fixed
//### setfill

	int a = 10;
	double d = 12.3456789;

//	cout << a << endl;
//	cout << setw(25) << a << endl;
//
//	cout << fixed << setprecision(4) << d << endl;
//
//	cout <<setfill('-')<< setw(25) << a << endl;

//	try{
//		try{
//			throw 10.5;	//int
//			cout << "Statement1" << endl;
//		}catch(double& e){
//			cerr <<"inner block exception occured: "<< endl;
//		}
//		cout << "Statement2" << endl;
//		throw 10;
//		cout << "Statement3" << endl;
//	}catch(int& e){
//		cerr <<"outer block exception occured: "<< e << endl;
//	}
//		cout << "Statement4" << endl;

	return 0;
}
