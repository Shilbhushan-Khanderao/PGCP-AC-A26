//============================================================================
// Name        : 7.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {


//	argc -> argument count : stores the count of arguments from command line in form of int
// 	argv -> argument vector: stores all the values coming from command line in form of string


//	cout << "Total Arguments: " << argc << endl;
//	cout << "Total Arguments: " << argv[0] << endl;

	cout << "Sum from CommandLine: " << stoi(argv[1]) + stoi(argv[2]) << endl;

//	./Day2.7.exe		: argument

	return 0;
}
