//============================================================================
// Name        : 7.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

class Student{
public:
	int rollno;
	string name;
	Student(int rollno, string name):rollno(rollno),name(name){
	}
};


int main(){

	Student s1(101, "shil");
	Student s2(102, "raj");
	Student s3(103, "ravi");

	// Write students to binary file
	ofstream writeObj;
	writeObj.open("data.dat",ios::binary);	// Binary mode

	writeObj.write((char*)&s1, sizeof(Student));
	writeObj.write((char*)&s2, sizeof(Student));
	writeObj.write((char*)&s3, sizeof(Student));
	
	writeObj.close();

	ifstream readObj;

	readObj.open("data.dat", ios::binary);

	Student temp(0,"");
	
	while (readObj.read((char*)&temp, sizeof(Student))) {
		cout << "Roll No: " << temp.rollno << ", Name: " << temp.name << endl;
	}

	readObj.close();


	return 0;
}

int main1() {

	ofstream write;

	write.open("data.txt", ios::app);	//append

	write << "Hello from AC" << endl;

	write.close();

	ifstream read;

	read.open("data.txt");

	string line;

//	read >> line;
	while(getline(read, line)){
		cout << line << endl;
	}

	read.close();

	return 0;
}
