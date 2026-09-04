//============================================================================
// Name        : 2.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main_queue(){
	queue<int> que;

	que.push(10);	// element will be added at end
	que.push(20);
	que.push(30);
	que.push(40);

	cout << que.front() << endl;
	cout << que.back() << endl;

	que.pop();
	cout << endl;

	cout << que.front() << endl;
	cout << que.back() << endl;


}

class Student{
	int rollno;
	string name;
public:
	Student(int rollno, string name) :rollno(rollno), name(name){
	}

	friend ostream& operator<<(ostream& out, const Student& s){
		return out << s.rollno << " : " << s.name << endl;
	}
};

int main() {

//	stack<int> stk;
	stack<Student> stk;

	stk.push(Student(100,"sk"));
	stk.push(Student(101,"ak"));
	stk.push(Student(102,"at"));
	stk.push(Student(103,"ss"));

//	int result = a * (b / c)

	cout << stk.size()<< endl;	// top most element in stack
	cout << stk.top()<< endl;	// top most element in stack
//	int temp = stk.pop();
//	cout << temp << endl;	// top most element in stack

	stk.pop();

	cout << stk.size()<< endl;	// top most element in stack
	cout << stk.top()<< endl;	// top most element in stack
	stk.pop();

	cout << stk.size()<< endl;	// top most element in stack
	cout << stk.top()<< endl;	// top most element in stack


	return 0;
}
