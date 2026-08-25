//============================================================================
// Name        : 5.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(){

	int size;

	cout << "Enter the Size of Array: " << endl;
	cin >> size;


	int arr[size];

	cout << "Enter the Elements of Array: " << endl;

	for(int i=0;i<size;i++){
		cin >> arr[i];
	}

	cout << "Array Elements: ";
	for(int i=0;i<size;i++){
		cout << arr[i] << " ";
	}


//	for(int i=0;i<5;i++){
//		if(arr[i] == 40){
//			cout << "Found";
//			return 0;
//		}
//	}
//	cout << "Not Found";

	return 0;
}

int main2(){

	int arr[]{10,20,30,40,50};

	for(int i=0;i<5;i++){
		if(arr[i] == 40){
			cout << "Found";
			return 0;
		}
	}
	cout << "Not Found";

	return 0;
}

int main1() {

	// variables
	int val = 10;	// initialization
	int val1(10);	// initialization
	int val2{10};	// initialization

//	cout << val << endl;
//	cout << val1 << endl;
//	cout << val2 << endl;

	int arr[10];	// create a array of type int	declaration + definition

	int arr1[3] = {10,30,27};	// initialization

	int arr2[]{20,39,78};		//initialization


//	cout << arr2[2];

	cout << arr1 << endl;

	return 0;
}
