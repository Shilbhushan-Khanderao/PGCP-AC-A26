//============================================================================
// Name        : 3.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

inline int square(int x){
	return x * x;
}


//pow, ceil sqrt, floor, min,  max


int main(){

	int a = 10;

	int c = 20;

	double b = 10.4;

	cout << "Power of A : " << pow(a,3) << endl;
	cout << "Ceil of A : " << ceil(b) << endl;
	cout << "Floor of A : " << floor(b) << endl;

	swap(a,c);

	cout << "A: " << a << endl;
	cout << "C: " << c << endl;

	return 0;
}



int main1() {

	int a = 10;

//	square(a); : return x * x;

	cout << square(a) << endl;


	return 0;
}
