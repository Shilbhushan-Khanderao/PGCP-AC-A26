//============================================================================
// Name        : 1.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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


int main1(){

	vector<Student> v;

	v.push_back(Student(101,"shil"));
	v.push_back({102,"aniket"});
	v.emplace_back(103,"aditya");

	for(Student temp : v){
		cout << temp;
	}

	return 0;
}

int main() {

	vector<int> v = {10,20,30,40,63,40,35};

	auto it = find(v.begin(), v.end(), 20);

	if(it!=v.end())
		cout << "found" << endl;
	else
		cout << "not found";

	sort(v.begin(), v.end());

	reverse(v.begin(), v.end());

	auto itrmin = min_element(v.begin(), v.end());

	cout << "MIN ELEMENT: " << *itrmin << endl;

	auto itrmax = max_element(v.begin(), v.end());

	cout << "MAX ELEMENT: " << *itrmax << endl;

	cout << "Size : " << v.size() << endl;
	cout << "Capacity: " << v.capacity() << endl;

	v.push_back(30);
	v.emplace_back(99);

	cout << v.front() << endl;
	cout << v.back() << endl;
	v.pop_back();


	for(int i=0;i<v.size();i++){
		cout << v[i] << " " ;
	}

	cout << endl;

	for(int temp : v){
		cout << temp << " " ;
	}

//	auto it = v.begin();		// return pointer to first element

//	v.end(); 	// return pointer to last + 1 element

	cout << endl;
	for(auto it = v.begin();it != v.end();++it){
		cout << *it << " " ;
	}


	return 0;
}
