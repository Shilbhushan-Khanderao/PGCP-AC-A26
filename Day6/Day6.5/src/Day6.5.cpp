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

	int rows, cols;

	cout << "Enter rows and cols: " << endl;
	cin >> rows >> cols;

	int **twoDArr = new int*[rows];
//	int *arr = new int[2];
//	*twoDArr = new int[2];

	for(int i=0;i<rows;i++)
		twoDArr[i] = new int[cols];

	cout << "Enter elements: " << endl;
	for(int i=0;i<rows;i++)
		for(int j=0;j<cols;j++)
			cin >> twoDArr[i][j];

	cout << "======== 2D Array elements (Matrix) ========" << endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout << twoDArr[i][j] << " ";
		}
		cout << endl;
	}

	for(int i=0;i<rows;i++)
		delete[] twoDArr[i];

	delete[] twoDArr;

//	int **twoDArr;	// pointer to pointer declare
//
//	int **twoDArr = new int*[2];
//
//	int *arr = new int[2];
//
//	*twoDArr = new int[2];

	return 0;
}





int main1() {

	int arr[3];	// array on stack

	int *dynArr = new int[3];	// it dynamic 1D array

	cout << "Enter elements: " << endl;
	for(int i = 0;i<3;i++)
		cin >> dynArr[i];


	cout << "======== Array elements ========" << endl;
	for(int i = 0;i<3;i++)
		cout << dynArr[i] << " ";

	delete[] dynArr;

	return 0;
}
