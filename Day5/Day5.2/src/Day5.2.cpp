//============================================================================
// Name        : 2.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// c language
int addInt(int a, int b){
	return a + b;
}

double addDouble(double a, double b){
	return a + b;
}
//Name Mangling

//Z9_addii
int add(int a, int b){			//add(int,int)
	return a + b;
}

double add(int a, double b){		//add(int,double)
	return a + b;
}

double add(double b, int a){		//add(double,int)
	return a + b;
}

//int add(double a, int b){		//add(double,int)
//	return a + b;
//}

float add(float a, float b){
	cout << "float" <<endl;
	return a + b;
}

double add(double a, double b){	//add(double,double)
	return a + b;
}

int add(int a, int b, int c){	//add(int,int,int)
	return a + b + c;
}

double getFarenheit(int temp = 37){	// default argument
	return (temp * 1.8) + 32;
}

int subtract(int a = 5, int b){	//default
	return a - b;
}

int main() {
	int a = 10;
	int b = 10;
	int c = 20;

	cout << addInt(a,b) << endl;
	cout << add(10.5f, 23.3f) << endl;
	cout << add(a,b,c) << endl;
	cout << add(a,b) << endl;

//	cout << subtract(a, b) << endl;
	cout << subtract(a,b) << endl;


	cout << getFarenheit(40) << endl;


	return 0;
}
