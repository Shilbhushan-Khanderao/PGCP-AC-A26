//============================================================================
// Name        : 3.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>
using namespace std;

int main() {

	shared_ptr<int> sptr = make_shared<int>(10);

	weak_ptr<int> wptr = sptr;	// will be a non-owning ptr

	cout << "Total Owners: " << sptr.use_count() << endl;

//	sptr.reset();

	if(wptr.expired())	// if the shared_ptr is present/ownership or released/expired
		//code
		cout << "Expired.." << endl;
	else{
		cout << "Still Exists.." << endl;
//		cout << wptr << endl;
	}

//	shared_ptr<int> p = wptr.lock();

	if(auto p = wptr.lock()){	// creates a temp shared_ptr for use
		cout << "Total Owners: " << sptr.use_count() << endl;
		cout << "Still Exist" << endl;
	}else
		cout << "Expired" << endl;
	return 0;
}
