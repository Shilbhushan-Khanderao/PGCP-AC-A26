//============================================================================
// Name        : 2.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
//using namespace std;		// here namespace being used


void swap(int &a, int &b){
	std::cout << "user defined swap.." << std::endl;
	int temp = a;
	a = b;
	b = temp;
	std::cout << "A : " << a  << " : " << "B : " << b << std::endl;
}

//
namespace MBA{
	class course{
	};

	int val = 10;

	void display(){
		std::cout << "display from MBA.." << std::endl;
	}
}

// defining the course of pg course
namespace PG{
	class course{
	};

	int val = 10;

	void display(){
		std::cout << "display from PG.." << std::endl;
	}
}

//old way
//namespace one{
//	namespace two{
//		void display(){
//			std::cout << "display from two.." << std::endl;
//		}
//	}
//	void display(){
//		std::cout << "display from one.." << std::endl;
//	}
//}

//modern c++ way
// nested namespace
namespace one::two{
	void display(){
		std::cout << "display from two.." << std::endl;
	}
}


int main() {

	int a = 10;
	int b = 20;

	std::swap(a, b);

//	using namespace MBA;

	MBA::display();
	PG::display();

	one::two::display(); //two namespace function call
//	one::display();

	return 0;
}
