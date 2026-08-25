//============================================================================
// Name        : 4.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	for(int i=0;i<50;i++){
		if(i == 41){
			cout << "Value 40\n";
			break;	// move out of scope/iteration
		}

		if(i % 2 == 0)
			continue;	// skip the current iteration


		cout << i  << " ";
	}

	return 0;
}
