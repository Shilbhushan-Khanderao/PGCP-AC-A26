//============================================================================
// Name        : 6.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int arr[2][2];	//declaration + definition of 2d array

	int arr1[2][2]{
			{10,10},{20,20}
	};

	cout << arr1[0] << endl;
	cout << arr1[1] << endl;


	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << arr1[i][j] << " ";
		}
	}

	return 0;
}
