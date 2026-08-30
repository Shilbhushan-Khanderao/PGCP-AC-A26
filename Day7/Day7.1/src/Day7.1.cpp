//============================================================================
// Name        : 1.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

enum Day{
//	Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6, Sunday = 7
	//Default:  0,1,2,3,4,5,6,7
	Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

enum codes{
	hi = 10, hey, hello = 20, yo, namaste = 30, hola
};

enum StatusCodes{
	NotModified = 304, OK = 200, NotFound = 404, InternalServerError = 500
};

//enum color{
//	Red, Blue, Orange, Black, White
//};
//
//enum TrafficSignal{
//	Red, Green, Yellow
//};

enum class color{
	Red, Blue, Orange, Black, White
};

enum class TrafficSignal{
	Red, Green, Yellow
};


int main(){

	color c = color::Red;

	Day day = Monday;

//	int col = color::Red;	//error: cannot convert 'color' to 'int'

	int col = static_cast<int>(color::Red);	// static cast

//	cout << c << endl;	// not allowed :error for operator overloading<<

	cout << day << endl;
	cout << col << endl;
	return 0;
}



int main1() {
//	const int Mon = 1;

//	int today = Mon;	// confusion

//	int today = Sunday;

	Day today = Thursday;

//	StatusCodes codes = OK;


//	switch(codes){
//		case 200:
//			cout << "Status : OK" << endl;
//			break;
//		case 304:
//			cout << "Status : Not Modified" << endl;
//			break;
//	}

	switch(today){
		case 1 :
			cout << "Monday" << endl;
			break;
		case 2 :
			cout << "Tuesday" << endl;
			break;
		case 3 :
			cout << "Wednesday" << endl;
			break;
		case 4 :
			cout << "Thursday" << endl;
			break;
		case 5 :
			cout << "Friday" << endl;
			break;
		case 6 :
			cout << "Saturday" << endl;
			break;
		case 7 :
			cout << "Sunday" << endl;
			break;
	}

	return 0;
}
