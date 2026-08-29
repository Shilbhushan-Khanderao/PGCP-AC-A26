//============================================================================
// Name        : 3.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//#include "iostream"		// it check iostream header inside current directory/project first then runtime dir
#include <iostream>		// it check iostream header inside std/runtime directory
#include "add.h"
#include "Student.h"
using namespace std;

int main() {

	Student s;

	s.acceptDetails();
	s.display();

	cout << add(10,30) << endl;

	return 0;
}

//g++ Day6.3.cpp add.cpp -o Day6.3.exe
