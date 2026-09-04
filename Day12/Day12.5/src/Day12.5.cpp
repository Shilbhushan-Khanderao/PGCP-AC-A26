//============================================================================
// Name        : 5.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <exception>
using namespace std;

class ArithmeticException : public exception{
	int line;
	string function;
	string file;
	string message;
public:
		ArithmeticException(int line, string function, string file):line(line),function(function),file(file){
			message = "Divide by zero at line: " + to_string(line)+ " in function : "+function + "(" + file +")";
		}

	const virtual char* what() const noexcept{
		return message.c_str();
	}
};


int divide(int a, int b){
	if(b == 0)
		throw ArithmeticException(__LINE__, __func__, __FILE__);
	return a/b;
}

//int divide(int a, int b){
//	if(b == 0)
//		throw "shil";		//throw is used to throw the exception
//		// int, double, char, string, obj,
//	return a/b;
//}

void some(){
	try{
		throw 10;	//int
		cout << "Statement1" << endl;
	}catch(double& e){
		cout <<"inner block exception occured: "<< endl;
		throw;
	}
}

int main(){

	try{
	cout << "Result: " << divide(10,0) << endl;
	}catch(ArithmeticException& e){
		cerr << e.what() << endl;
	}

	return 0;
}

int main2(){

	return 0;
}

int main1() {

	cout << "statement 1" << endl;
	int a = 20;
	int b = 0;

	try{
		int res = divide(a,b);
	cout << "statement 2" << endl;
	cout << "Result : " << res << endl;
	}catch(int& e){
		cout << e << endl;
	}catch(double& e){
		cout << e << endl;
	}catch(...){
		cout << "undefined exception.."<< endl;
	}
//	if(res == -1)
//		cout << "Divide by zero!!" << endl;
//	else

	cout << "statement 3" << endl;

	return 0;
}
