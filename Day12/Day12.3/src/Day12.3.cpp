//============================================================================
// Name        : 3.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

//template class
template<typename T, typename U>
class Dictionary{
	T key;
	U value;

public:
	Dictionary(T key, U value):key(key),value(value){

	}
};

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

	map<int, string> mp;

	map<int, Student> mp1;

	Student s = Student(101, "shil");

	mp1.insert({101, Student(101, "shil")});
	mp1.emplace(101, Student{101, "shil"});

	mp[101] = "shil";
	mp[101] = "shivraj";
	mp[104] = "aniket";
	mp[103] = "vipul";
	mp[102] = "aditya";

	auto it = mp.find(102);
	if(it != mp.end())
		cout <<"Found" << it->first << " " << it->second << endl;
	else
		cout << "Not found" << endl;


//	for(int i=101;i<mp.size();i++){
//		cout << mp[i] << " " ;
//	}

//	cout << endl;

//	mp.begin()
////
	for(auto it : mp){
		cout << it.first  << " " << it.second << endl;
	}
//
////	auto it = v.begin();		// return pointer to first element
//
////	v.end(); 	// return pointer to last + 1 element
//
	cout << endl;
	for(auto it = mp1.begin();it != mp1.end();++it){
		cout << it->first << " " << it->second << endl;
	}

	return 0;
}
