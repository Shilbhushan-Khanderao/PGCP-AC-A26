//============================================================================
// Name        : 5.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


//function template
//template<typename T>	// int, double, char,
//T add(T a, T b){
//	return a + b;
//}

template<typename T, typename U>
U add(T a, U b){
	return a + b;
}

//int add(int a, int b){
//	return a + b;
//}
//
//double add(double a, double b){
//	return a + b;
//}

int main() {

	cout << add(10,30) << endl;
	cout << add(10.2,30.4) << endl;
	cout << add<double>(20, 25.4) << endl;
	cout << add(20, 25.4) << endl;
	return 0;
}
